# problem analysis   
INPUT:   
a. Name of the user  
b. Base Salary(BS)  
c. Weekly Working Hours(WH)  
d. Company Bonus rate(BR)  
OUTPUT:  
a. Bonus Payement(BP)  
b. Gross Salary(GS)  
c. Net Salary(NS)  
OPERATIONS:  
a. Read the users input of Base salary, weekly working hours, the company bonus rate  
b. Calculate the Bonus payement, Gross salary, pension, Tax deduction, and net salary by using the users input  
c. Display all the  relevant variables that are calculated for the user  
# pseudocode  
 Step1: START  
Step2: Read Base salary(BS), working hours(WH), Company bonus rate(BR), and Name of the user   
Step3: Calculate Bonus payement(BP) as  

                  BP = BR * WH  
Step4: Calculate Gross Salary(GS) as 

                 GS = BP + BS   
Step5: calculate pension(P) as  

                 P = 0.05 * BS   
Step6: calculate Tax(T) as   
           
                 T = 0.15 * BS          
Step7: Calculate Net salary(NS)  as  

                 NS = GS - P - T  
Step8: Print Name of the user, Bonus payement, Gross salary, and Net salary  
Step9: STOP   
# flowchart
  ```mermaid
  graph TD  
  A([START]) -->B[/ Input Base salary BS, Working hour WH, Bonus rate BR/]-->c[Bonus payement BP=BR*WH]-->d[Gross salary GS=BP+BS]-->e[Pension P=0.05*BS]-->f[Tax T=0.15*BS]-->g[Net salary NS=GS-P-T]-->h[/print Name of the user, BP, GS, NS/]-->i([STOP])  
  style i fill: stroke:#444,stroke-width:4px,font-size:20px  
  style A fill: stroke:#444,stroke-width:4px,font-size:20px 