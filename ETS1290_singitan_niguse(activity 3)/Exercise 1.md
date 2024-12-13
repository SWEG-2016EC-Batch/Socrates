Step 1: start

Step 2: read basic salary, worked hours, bonus rate, bonus, gross salary, pension, tax rate, tax, and net pay.

Step 3: if basic salary<=200
Tax rate= 0
else if basic salary>200 and basic salary<=600
tax rate=0.1
else if basic salary>600 and basic salary<=1200
tax rate=0.15
else if basic salary>1200 and basic salary<=2000
tax rate=0.2
else if basic salary>2000 and basic salary<=3500
tax rate=0.25
else
tax rate=0.3

step 4: calculate pension as
pension=basic salary*0.7

step 5: calculate tax as
tax= tax rate*gross salary

Step 6: if worked hours > 40 then,
Bonus= (worked hours – 40) *bonus rate
gross salary= basic salary+ bonus
go to step8

Step 7: if worked hours <40 then,
gross salary= basic salary
go to step8

step 8: calculate net pay as
net pay= gross salary-pension-tax;

step 9: print net pay

step10: stop


