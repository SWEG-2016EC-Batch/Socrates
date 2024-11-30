# problem analysis
1. INPUT: Two real numbers Weight(W) in kilogram and Height(H) in meters  
2. OUTPUT:  
    a. Body mass index, BMI  
    b. under weight, normal, and obese
3. OPERATION:  
    a. Reading the two numbers W and H  
    b. calculate BMI= W/H*H  
    c. display BMI  
    d. checking if the BMI fullfills certain parameters.  
    Example: Is BMI less than 18.5 or  
             Is BMI >=18.5 and BMI< 25 or  
             IS BMI >25.  
    e. Displaying under weight, normal, or overweight according to the above circumstances.  
# pseudocode 
Step1: START  
Step2: Read height H in meters  
Step3: Read weight W in kilograms  
Step4: Calculate BMI as  
                 BMI= W/H*H  
Step5: print BMI  
Step6: If BMI< 18.5, then go to step 10  
Step7: IF BMI<25 and BMI>= 18.5, go to step 12  
Step8: Print over weight  
Step9: Go to step 13  
Step10: Print under weight  
Step11: Go to step 13  
Step12: Print normal weight  
Step13: STOP  
# flow chart   
```mermaid
  graph TD  
  A([START]) -->B[/Input weight W and heightH  
  /]-->C[BMI= W/H*H]-->D[/Print BMI/]-->E{Is BMI< 18.5}--yes-->F[/Print under weight/]  
  E--NO-->f{IS BMI<25 and BMI>= 18.5}--yes-->g[/print normal weight/]  
  f--NO-->h[/print over weight/]
  h-->j([STOP])  
  g-->j
  F-->j  
  style j fill: stroke:#444,stroke-width:4px,font-size:20px  
  style A fill: stroke:#444,stroke-width:4px,font-size:20px  

    




