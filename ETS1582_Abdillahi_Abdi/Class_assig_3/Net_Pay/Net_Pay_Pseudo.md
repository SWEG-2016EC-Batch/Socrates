1. Start
2. Declare variables: basic_salary, gross_salary, net_salary, worked_hours, extra_worked_hours, bonus_rate, pension, bonus, tax
3. Read basic_salary
4. Read worked_hours
5. If worked_hours > 40
    - Calculate extra_worked_hours = worked_hours - 40
    - Input bonus_rate
6. Else
    - Set extra_worked_hours to 0
7. Calculate bonus = extra_worked_hours * bonus_rate
8. Calculate gross_salary = basic_salary + bonus
9. Calculate pension = basic_salary * 0.7
10. Determine tax based on gross_salary:
    - If gross_salary <= 200, tax = gross_salary * 0.0
    - If gross_salary > 200 and <= 600, tax = gross_salary * 0.1
    - If gross_salary > 600 and <= 1200, tax = gross_salary * 0.15
    - If gross_salary > 1200 and <= 2000, tax = gross_salary * 0.2
    - If gross_salary > 2000 and <= 3500, tax = gross_salary * 0.25
    - If gross_salary > 3500, tax = gross_salary * 0.3
11. Calculate net_salary = gross_salary - pension - tax
12. Output "Your Net Salary is: " + net_salary
13. End.