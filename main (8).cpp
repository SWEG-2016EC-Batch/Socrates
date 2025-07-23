#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Car {
    string name;
    int pricePerDay;
    bool isAvailable;
};

struct User {
    string name;
    string address;
    int licenseNumber;
    int id;
    vector<string> rentedCars;
    vector<int> rentalPrices;
    vector<int> penaltyPrices;
    vector<int> rentalDurations;
    vector<int> completedRentalPrices;
    vector<int> completedPenaltyPrices;
};

void loadCarTypesFromFile(vector<Car> carTypes[]);
void saveCarTypesToFile(vector<Car> carTypes[]);
void initializeCarTypes(vector<Car> carTypes[]);
void registerUser(vector<User>& users);
int generateUniqueId(const vector<User>& users);
void loginUser(vector<User>& users, vector<Car> carTypes[]);
void rentCar(User& user, vector<Car> carTypes[]);
void returnCar(User& user, vector<Car> carTypes[]);
void viewMyRentals(const User& user);
void viewAllUsers(const vector<User>& users);
void viewAllRentals(const vector<User>& users);
void viewRevenueStats(const vector<User>& users);
void manageCars(vector<Car> carTypes[]);
void adminMenu(vector<User>& users, vector<Car> carTypes[]);
void saveUsersToFile(const vector<User>& users);
void loadUsersFromFile(vector<User>& users);

int main() {
    vector<User> users;
    vector<Car> carTypes[5];

    loadUsersFromFile(users);
    loadCarTypesFromFile(carTypes);

    int choice;
    while (true) {
        cout << "\n===== CAR RENTAL SYSTEM =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Admin Login\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser(users);
                saveUsersToFile(users);
                break;
            case 2:
                loginUser(users, carTypes);
                saveUsersToFile(users);
                saveCarTypesToFile(carTypes);
                break;
            case 3:
                adminMenu(users, carTypes);
                break;
            case 4:
                saveUsersToFile(users);
                saveCarTypesToFile(carTypes);
                cout << "Exiting the system. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

void registerUser(vector<User>& users) {
    User newUser;
    cout << "\n===== REGISTER =====\n";
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, newUser.name);
    cout << "Enter your address: ";
    getline(cin, newUser.address);
    cout << "Enter your license number: ";
    cin >> newUser.licenseNumber;
    newUser.id = generateUniqueId(users);
    users.push_back(newUser);
    cout << "Registration successful! Your ID is: " << newUser.id << endl;
}

int generateUniqueId(const vector<User>& users) {
    if (users.empty()) return 1;
    return users.back().id + 1;
}

void loginUser(vector<User>& users, vector<Car> carTypes[]) {
    int id;
    cout << "\n===== LOGIN =====\n";
    cout << "Enter your ID: ";
    cin >> id;

    auto it = find_if(users.begin(), users.end(), [id](const User& user) {
        return user.id == id;
    });

    if (it == users.end()) {
        cout << "User not found. Please register first.\n";
        return;
    }

    User& user = *it;
    cout << "\nWelcome back, " << user.name << "!\n";

    int choice;
    while (true) {
        cout << "\n===== USER MENU =====\n";
        cout << "1. Rent a Car\n";
        cout << "2. Return a Car\n";
        cout << "3. View My Rentals\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                rentCar(user, carTypes);
                break;
            case 2:
                returnCar(user, carTypes);
                break;
            case 3:
                viewMyRentals(user);
                break;
            case 4:
                return;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}

void rentCar(User& user, vector<Car> carTypes[]) {
    int choice;
    cout << "\n===== RENT A CAR =====\n";
    cout << "1. SUV\n";
    cout << "2. Luxury\n";
    cout << "3. Sport\n";
    cout << "4. Economic\n";
    cout << "5. Convertible\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice < 1 || choice > 5) {
        cout << "Invalid choice. Please try again.\n";
        return;
    }

    int typeIndex = choice - 1;
    if (carTypes[typeIndex].empty()) {
        cout << "No cars available in this category.\n";
        return;
    }

    cout << "\nAvailable cars in this category:\n";
    for (int i = 0; i < carTypes[typeIndex].size(); i++) {
        if (carTypes[typeIndex][i].isAvailable) {
            cout << i + 1 << ". " << carTypes[typeIndex][i].name
                 << " - $" << carTypes[typeIndex][i].pricePerDay << "/day\n";
        }
    }

    int carIndex;
    cout << "Enter the number of the car you want to rent (0 to cancel): ";
    cin >> carIndex;

    if (carIndex == 0) {
        cout << "Rental canceled.\n";
        return;
    }

    if (carIndex < 1 || carIndex > carTypes[typeIndex].size()) {
        cout << "Invalid car number. Please try again.\n";
        return;
    }

    carIndex--;
    if (!carTypes[typeIndex][carIndex].isAvailable) {
        cout << "This car is currently rented. Please choose another one.\n";
        return;
    }

    int days;
    cout << "Enter the number of days you want to rent this car: ";
    cin >> days;

    if (days <= 0) {
        cout << "Invalid number of days. Rental canceled.\n";
        return;
    }

    int totalPrice = carTypes[typeIndex][carIndex].pricePerDay * days;
    cout << "Total rental cost: $" << totalPrice << endl;
    cout << "Confirm rental (y/n)? ";
    char confirm;
    cin >> confirm;

    if (confirm != 'y' && confirm != 'Y') {
        cout << "Rental canceled.\n";
        return;
    }

    carTypes[typeIndex][carIndex].isAvailable = false;
    user.rentedCars.push_back(carTypes[typeIndex][carIndex].name);
    user.rentalPrices.push_back(totalPrice);
    user.penaltyPrices.push_back(0);
    user.rentalDurations.push_back(days);

    cout << "Car rented successfully for " << days << " days! Enjoy your ride!\n";
}

void viewAllUsers(const vector<User>& users) {
    cout << "\n===== ALL USERS =====\n";
    for (const auto& user : users) {
        cout << "Name: " << user.name << endl;
        cout << "Address: " << user.address << endl;
        cout << "License Number: " << user.licenseNumber << endl;
        cout << "ID: " << user.id << endl;
        cout << "Cars Rented: ";
        if (user.rentedCars.empty()) {
            cout << "None";
        } else {
            for (const auto& car : user.rentedCars) {
                cout << car << " ";
            }
        }
        cout << "\n";
    }
}

void viewAllRentals(const vector<User>& users) {
    cout << "\n===== ALL RENTALS =====\n";
    for (const auto& user : users) {
        cout << "Name: " << user.name << endl;
        cout << "ID: " << user.id << endl;
        cout << "Cars Rented: ";
        if (user.rentedCars.empty()) {
            cout << "None";
        } else {
            for (const auto& car : user.rentedCars) {
                cout << car << " ";
            }
        }
        cout << "\n";
    }
}

void viewRevenueStats(const vector<User>& users) {
    int totalActiveRentals = 0;
    int totalCompletedRentals = 0;
    int totalPenalties = 0;
    int totalRevenue = 0;

    for (const auto& user : users) {
        totalActiveRentals += user.rentalPrices.size();

        for (int price : user.rentalPrices) {
            totalRevenue += price;
        }

        for (int penalty : user.penaltyPrices) {
            totalPenalties += penalty;
            totalRevenue += penalty;
        }

        totalCompletedRentals += user.completedRentalPrices.size();

        for (int price : user.completedRentalPrices) {
            totalRevenue += price;
        }

        for (int penalty : user.completedPenaltyPrices) {
            totalPenalties += penalty;
            totalRevenue += penalty;
        }
    }

    cout << "\n===== REVENUE STATISTICS =====\n";
    cout << "Active Rentals: " << totalActiveRentals << endl;
    cout << "Completed Rentals: " << totalCompletedRentals << endl;
    cout << "Total Rentals: " << (totalActiveRentals + totalCompletedRentals) << endl;
    cout << "Total Penalties: $" << totalPenalties << endl;
    cout << "Total Revenue: $" << totalRevenue << endl;
}

void initializeCarTypes(vector<Car> carTypes[]) {
    bool isEmpty = true;
    for (int i = 0; i < 5; i++) {
        if (!carTypes[i].empty()) {
            isEmpty = false;
            break;
        }
    }

    if (!isEmpty) return;

    carTypes[0] = {
        {"Toyota RAV4", 75, true},
        {"Honda CR-V", 80, true},
        {"Jeep Wrangler", 120, true},
        {"Ford Explorer", 95, true},
        {"Chevrolet Tahoe", 130, true},
        {"Nissan Rogue", 70, true}
    };

    carTypes[1] = {
        {"Mercedes S-Class", 200, true},
        {"BMW 7 Series", 190, true},
        {"Audi A8", 185, true},
        {"Lexus LS", 175, true},
        {"Cadillac Escalade", 210, true},
        {"Tesla Model S", 220, true}
    };
}

void loadCarTypesFromFile(vector<Car> carTypes[]) {
    ifstream file("car_types.dat");

    if (!file.is_open()) {
        initializeCarTypes(carTypes);
        return;
    }

    for (int i = 0; i < 5; i++) {
        int carCount;
        file >> carCount;
        file.ignore();

        carTypes[i].clear();

        for (int j = 0; j < carCount; j++) {
            Car car;
            getline(file, car.name);
            file >> car.pricePerDay >> car.isAvailable;
            file.ignore();

            carTypes[i].push_back(car);
        }
    }

    file.close();
}

void saveCarTypesToFile(vector<Car> carTypes[]) {
    ofstream file("car_types.dat");

    if (!file.is_open()) {
        cout << "Error: Unable to save car data.\n";
        return;
    }

    for (int i = 0; i < 5; i++) {
        file << carTypes[i].size() << endl;

        for (const auto& car : carTypes[i]) {
            file << car.name << endl;
            file << car.pricePerDay << " " << car.isAvailable << endl;
        }
    }

    file.close();
}

void manageCars(vector<Car> carTypes[]) {
    cout << "\n===== CAR MANAGEMENT =====\n";
    cout << "Car Types:\n";
    cout << "1. SUVs\n";
    cout << "2. Luxury\n";
    cout << "3. Sport\n";
    cout << "4. Economic\n";
    cout << "5. Convertible\n";
    cout << "6. Back to Admin Menu\n";

    int choice;
    cout << "Select car type to manage: ";
    cin >> choice;

    if (choice < 1 || choice > 6) {
        cout << "Invalid selection.\n";
        return;
    }

    if (choice == 6) return;

    int typeIndex = choice - 1;

    cout << "\nCars in this category:\n";
    int index = 1;
    for (const auto& car : carTypes[typeIndex]) {
        cout << index << ". " << car.name
             << " - $" << car.pricePerDay << "/day"
             << " - " << (car.isAvailable ? "Available" : "Rented") << endl;
        index++;
    }

    cout << "\nOptions:\n";
    cout << "1. Add a new car\n";
    cout << "2. Modify car price\n";
    cout << "3. Remove a car\n";
    cout << "4. Back\n";

    int action;
    cout << "Select action: ";
    cin >> action;

    switch (action) {
        case 1: {
            Car newCar;
            cout << "Enter car name: ";
            cin.ignore();
            getline(cin, newCar.name);

            cout << "Enter price per day: $";
            cin >> newCar.pricePerDay;

            newCar.isAvailable = true;
            carTypes[typeIndex].push_back(newCar);

            cout << "Car added successfully!\n";
            break;
        }
        case 2: {
            int carIndex;
            cout << "Enter car number to modify: ";
            cin >> carIndex;

            if (carIndex < 1 || carIndex > carTypes[typeIndex].size()) {
                cout << "Invalid car number.\n";
                break;
            }

            cout << "Enter new price per day: $";
            cin >> carTypes[typeIndex][carIndex-1].pricePerDay;

            cout << "Price updated successfully!\n";
            break;
        }
        case 3: {
            int carIndex;
            cout << "Enter car number to remove: ";
            cin >> carIndex;

            if (carIndex < 1 || carIndex > carTypes[typeIndex].size()) {
                cout << "Invalid car number.\n";
                break;
            }

            if (!carTypes[typeIndex][carIndex-1].isAvailable) {
                cout << "Cannot remove a car that is currently rented.\n";
                break;
            }

            carTypes[typeIndex].erase(carTypes[typeIndex].begin() + carIndex - 1);
            cout << "Car removed successfully!\n";
            break;
        }
        case 4:
            return;
        default:
            cout << "Invalid option.\n";
    }
}

void adminMenu(vector<User>& users, vector<Car> carTypes[]) {
    string password;
    cout << "\n===== ADMIN LOGIN =====\n";
    cout << "Enter admin password: ";
    cin >> password;

    if (password != "admin123") {
        cout << "Incorrect password. Access denied.\n";
        return;
    }

    cout << "Admin access granted.\n";

    char choice;
    while (true) {
        cout << "\n===== ADMIN MENU =====\n";
        cout << "1. View All Users\n";
        cout << "2. View All Rentals\n";
        cout << "3. Manage Cars\n";
        cout << "4. View Revenue Statistics\n";
        cout << "5. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                viewAllUsers(users);
                break;
            case '2':
                viewAllRentals(users);
                break;
            case '3':
                manageCars(carTypes);
                saveCarTypesToFile(carTypes);
                break;
            case '4':
                viewRevenueStats(users);
                break;
            case '5':
                return;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    }
}

void saveUsersToFile(const vector<User>& users) {
    ofstream file("users.dat");

    if (!file.is_open()) {
        cout << "Error: Unable to save user data.\n";
        return;
    }

    file << users.size() << endl;

    for (const auto& user : users) {
        file << user.name << endl;
        file << user.address << endl;
        file << user.licenseNumber << endl;
        file << user.id << endl;

        file << user.rentedCars.size() << endl;
        for (size_t i = 0; i < user.rentedCars.size(); i++) {
            file << user.rentedCars[i] << endl;
            file << user.rentalPrices[i] << endl;
            file << user.penaltyPrices[i] << endl;
            file << user.rentalDurations[i] << endl;
        }

        file << user.completedRentalPrices.size() << endl;
        for (size_t i = 0; i < user.completedRentalPrices.size(); i++) {
            file << user.completedRentalPrices[i] << endl;
            file << user.completedPenaltyPrices[i] << endl;
        }
    }

    file.close();
}

void loadUsersFromFile(vector<User>& users) {
    ifstream file("users.dat");

    if (!file.is_open()) {
        cout << "No existing user data found. Starting with empty user list.\n";
        return;
    }

    int userCount;
    file >> userCount;
    file.ignore();

    users.clear();

    for (int i = 0; i < userCount; i++) {
        User user;

        getline(file, user.name);
        getline(file, user.address);
        file >> user.licenseNumber;
        file >> user.id;
        file.ignore();

        int rentalCount;
        file >> rentalCount;
        file.ignore();

        for (int j = 0; j < rentalCount; j++) {
            string carName;
            int rentalPrice, penaltyPrice, duration;

            getline(file, carName);
            file >> rentalPrice;
            file >> penaltyPrice;
            file >> duration;
            file.ignore();

            user.rentedCars.push_back(carName);
            user.rentalPrices.push_back(rentalPrice);
            user.penaltyPrices.push_back(penaltyPrice);
            user.rentalDurations.push_back(duration);
        }

        int completedRentalCount;
        file >> completedRentalCount;
        file.ignore();

        for (int j = 0; j < completedRentalCount; j++) {
            int rentalPrice, penaltyPrice;

            file >> rentalPrice;
            file >> penaltyPrice;
            file.ignore();

            user.completedRentalPrices.push_back(rentalPrice);
            user.completedPenaltyPrices.push_back(penaltyPrice);
        }

        users.push_back(user);
    }

    file.close();
}

void returnCar(User& user, vector<Car> carTypes[]) {
    if (user.rentedCars.empty()) {
        cout << "You don't have any rented cars to return.\n";
        return;
    }

    cout << "\n===== RETURN A CAR =====\n";
    cout << "Your rented cars:\n";

    for (size_t i = 0; i < user.rentedCars.size(); i++) {
        cout << i + 1 << ". " << user.rentedCars[i]
             << " - Rental price: $" << user.rentalPrices[i]
             << " - Duration: " << user.rentalDurations[i] << " days\n";
    }

    int choice;
    cout << "Enter the number of the car you want to return (0 to cancel): ";
    cin >> choice;

    if (choice == 0) {
        cout << "Return canceled.\n";
        return;
    }

    if (choice < 1 || choice > user.rentedCars.size()) {
        cout << "Invalid choice. Please try again.\n";
        return;
    }

    int index = choice - 1;
    string carToReturn = user.rentedCars[index];

    // Find the car in the inventory to get its daily rate
    int dailyRate = 0;
    bool carFound = false;
    for (int i = 0; i < 5; i++) {
        for (auto& car : carTypes[i]) {
            if (car.name == carToReturn && !car.isAvailable) {
                car.isAvailable = true;
                dailyRate = car.pricePerDay;
                carFound = true;
                break;
            }
        }
        if (carFound) break;
    }

    // Calculate penalty for extended rental if applicable
    int actualDays;
    cout << "Enter the actual number of days the car was used: ";
    cin >> actualDays;

    int originalDays = user.rentalDurations[index];
    int penalty = 0;

    if (actualDays > originalDays) {
        int extraDays = actualDays - originalDays;
        penalty = extraDays * dailyRate * 1.5; // 50% extra charge per day for late returns

        cout << "You returned the car " << extraDays << " days late.\n";
        cout << "Penalty charge: $" << penalty << " (1.5x daily rate for extra days)\n";

        // Update the penalty in the user's record
        user.penaltyPrices[index] = penalty;
    } else {
        cout << "Car returned on time. No penalty charges.\n";
    }

    // Calculate total payment
    int totalPayment = user.rentalPrices[index] + penalty;
    cout << "Total payment: $" << totalPayment << endl;
    cout << "Thank you for returning the car.\n";

    // Before removing the rental from user's records, store it in completed rentals
    user.completedRentalPrices.push_back(user.rentalPrices[index]);
    user.completedPenaltyPrices.push_back(penalty);

    // Remove the car from the user's rentals
    user.rentedCars.erase(user.rentedCars.begin() + index);
    user.rentalPrices.erase(user.rentalPrices.begin() + index);
    user.penaltyPrices.erase(user.penaltyPrices.begin() + index);
    user.rentalDurations.erase(user.rentalDurations.begin() + index);

    cout << "Car returned successfully. Thank you for using our service!\n";
}

void viewMyRentals(const User& user) {
    cout << "\n===== MY RENTALS =====\n";

    if (user.rentedCars.empty()) {
        cout << "You don't have any rented cars.\n";
        return;
    }

    cout << "Your rented cars:\n";
    for (size_t i = 0; i < user.rentedCars.size(); i++) {
        cout << i + 1 << ". " << user.rentedCars[i]
             << " - Rental price: $" << user.rentalPrices[i]
             << " - Duration: " << user.rentalDurations[i] << " days\n";
    }
}
