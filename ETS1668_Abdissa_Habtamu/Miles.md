Problem Analysis

This program calculates the maximum distance a vehicle can travel without refueling, given the fuel tank capacity and the vehicle's fuel efficiency. It includes input validation for the tank capacity to ensure the user provides a valid numeric input.


---

Input:

1. tank_capacity: Capacity of the fuel tank in gallons (integer).


2. miles_per_gallon: Fuel efficiency of the vehicle in miles per gallon (integer).



Process:

1. Prompt the user to input the fuel tank capacity.


2. Validate the input:

If the input is invalid (non-numeric), display an error message and prompt the user to try again.

Use cin.clear() to reset the error state and cin.ignore() to discard invalid input.



3. Once valid, prompt the user to input the vehicle's miles per gallon.


4. Calculate the maximum distance the vehicle can travel without refueling:



no_of_miles = tank_capacity * miles_per_gallon

Output:

The maximum distance the vehicle can travel without refueling:

The miles your automobile goes without refueling is: <no_of_miles>


---

Pseudo-code

START
  LABEL start:
  Declare variables: tank_capacity, miles_per_gallon, no_of_miles

  PRINT "Enter the capacity in gallons of your automobile fuel tank"
  INPUT tank_capacity

  IF input is invalid THEN
    PRINT "Invalid input, please try again"
    CLEAR input error
    DISCARD invalid input
    GOTO start

  ELSE
    PRINT "Input the miles per gallon your automobile can be driven"
    INPUT miles_per_gallon

    COMPUTE no_of_miles = tank_capacity * miles_per_gallon

    PRINT "The miles your automobile goes without refueling is:", no_of_miles
  END

Flowchart
``` mermaid
graph TD
    A[Start] --> B[Prompt: "Enter the capacity in gallons of your automobile fuel tank"]
    B --> C{Is input valid?}
    C -- Yes --> D[Prompt: "Input the miles per gallon your automobile can be driven"]
    D --> E[Calculate no_of_miles = tank_capacity * miles_per_gallon]
    E --> F[Display: "The miles your automobile goes without refueling is: no_of_miles"]
    F --> G[End]
    C -- No --> H[Display: "Invalid input, please try again"]
    H --> I[Clear and discard invalid input]
    I --> B
