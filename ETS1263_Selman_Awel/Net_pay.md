PSEUDO CODE 

Step1: start
Step2: read basic salary, worked hours, bonus rate, bonus, gross salary, pension, tax rate, tax, and net pay.
Step3: if basic salary<=200
            Tax rate= 0
        else if basic salary>200 and basic salary<=600
            tax rate=0.1
        else if basic salary>600&&basic salary<=1200
            tax rate=0.15
        else if basic salary>1200&&basic salary<=2000
            tax rate=0.2
        else if basic salary>2000&&basic salary<=3500
            tax rate=0.25
        else
            tax rate=0.3
step4: calculate pension as 
              pension=basic salary*0.7
step5: calculate tax as 
               tax= tax rate*gross salary     
Step6: if worked hours > 40 then, 
              Bonus= (worked hours – 40) *bonus rate
              gross salary= basic salary+ bonus
              go to step8
Step7: if worked hours <40 then,
               gross salary= basic salary
               go to step8
step8: calculate net pay as 
               net pay= gross salary-pension-tax;
step9: print net pay
step10: stop                       
    



