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
