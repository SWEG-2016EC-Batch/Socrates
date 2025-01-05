--------------------------------------Project name: Car Rental System-----------------------------------------------





Start the program.
declare string data types as arrays and  variables as well.
declare integral data type variables and arrays.
set up date and day number for each month (use loop structure).
in the loop assign month names and day numbers.
create the main loop for the user interaction(registration,renting and returning).
Display user registration menu.
handle user registration by classifying them into new users, old users and the admin(for the report).
if the user successfully sign up and sign in ,then handle their car rental process.
Display a choice menu to Select car type and model
the user cannot rent more than 3 cars.
Set rental and return dates
Calculate rental duration and price
Handle car return and calculate penalties
Display thank you message
Do the same thing for all other car types
Handle the report generation (admin only).
display the report menu
if the manager needs the monthly transaction
calculate and display total transactions
if the manager needs the customer details.
display the details about the customers like dates, rents , names , address and other important details.
if the manager looking for the rentals of the current month.
calculate and display the number of rentals.
if the manager is looking for the average rentals per person.
Calculate and display average rentals.
## flow chart 
``` mermaid
flowchart TD
    Start([START]) --> InputCustomerInfo[/INPUT Customer Info/]
    InputCustomerInfo --> SignUpOrSignIn{"Sign Up or Sign In?"}
    
    SignUpOrSignIn -->|Sign Up| GenerateID["Generate Unique ID"]
    GenerateID --> SaveCustomer["Save Customer Details"]
    SaveCustomer --> DisplayCars{"Display Available Cars"}
    
    SignUpOrSignIn -->|Sign In| DisplayCars
    DisplayCars --> SelectCar[/INPUT Selected Car/]
    SelectCar --> ConfirmRental["Record Transaction"]
    
    ConfirmRental --> RentalPeriod["Track Rental Period"]
    RentalPeriod --> CheckReturn{"IS Car Returned On Time?"}
    CheckReturn -->|Yes| UpdateInventory["Update Availability"]
    CheckReturn -->|No| CalcPenalty["Calculate Penalty"]
    
    CalcPenalty --> PrintPenalty["PRINT Total Penalty"]
    PrintPenalty --> UpdateInventory
    
    UpdateInventory --> GenerateReports{"Generate Reports?"}
    GenerateReports -->|Yes| TransactionReport["Print Transaction Report"]
    TransactionReport --> End([STOP])
    
    GenerateReports -->|No| End
