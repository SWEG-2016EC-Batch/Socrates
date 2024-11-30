# problem analysis  
1. INPUT:   
a. capacity of the fuel tanks(CFT) in gallons  
b. miles per gallon(MPG)  
2. OUTPUT: the number of miles the automobile can be driven without refueling(Total miles(TM))  
3. OPERATION:  
a. Reading FT in gallons and MPG  
b. calculating Total miles(TM) as  
TM= CFT * MPG  
c. displaying or printing Total miles(TM) as the number of miles the automobile can be driven without refueling.  
# pseudocode  

Step1: START  
Step2: Prompt the user to input capacity of the fuel tanks in gallons (CFT)   
Step3: prompt the user to input miles per gallon(MPG)   
Step4: calculate Total miles(TM) as  
TM= CFT*MPG   
Step5: print Total miles(TM) as the number of miles the automobile can be driven without refueling.  
Step6: STOP  
# flow chart  
 ```mermaid
  graph TD  
   A([START]) -->B[/Input capacity of the fuel tanks CFT /]-->C[/Input miles per gallon MPG/]  
   C-->d[Total miles TM= CFT*MPG ]-->E[/print TM as the number of miles the automobile can be driven without refueling/]-->f([STOP])  
   style A fill: stroke:#444,stroke-width:4px,font-size:20px  
  style f fill: stroke:#444,stroke-width:4px,font-size:20px 