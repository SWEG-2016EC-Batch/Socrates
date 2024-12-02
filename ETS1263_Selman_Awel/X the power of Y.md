# problem analysis  
1. INPUT: Two integers x and Y  
2. OUTPUT: result  
3. OPERATION:   
      a. Reading the two integers x and Y  
      b. initialize result as 
      result= 1  
      c.perform the task below for Y>0  
      result= result*x  
      Y--  
      d. display result  
# pseudocode  
 Step1: START  
 Step2: Read x and Y  
 Step3: Initialize result as  
    result=1  
 Step4: calculate x the power of Y using

         while(Y>0)    
         result=result*x   
         Y--  
step5: Print result   
Step6: STOP  
# flowchart  
```mermaid
  graph TD  
  A([START]) -->B[/Input the integer values X and Y/]-->c[initialize result= 1]-->d{Is Y>0}--yes-->e[result= result*X    , Y--]  
  d--NO---->f([STOP]) 
  e-->d  
  style A fill: stroke:#444,stroke-width:4px,font-size:20px  
  style f fill: stroke:#444,stroke-width:4px,font-size:20px  