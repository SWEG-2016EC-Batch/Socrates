# problem analysis  
INPUT: File size in Bytes  
OUTPUT: Time it takes in days, hours, minutes, and seconds  
OPERATION:  
a. Read the File size in Bytes given by the user  
b. Calculate Time it takes in days, hours, minutes, and seconds to send the file
c. Display days, hours, minutes, and seconds   
# pseudocode  
Step1: START  
Step2: Read File size in Bytes  
Step3: Calculate time as  
  
          time = file_size/transmission_rate  
Step4: Calculate days as   
  
          days = time/86400   
          time2=time mod 86400   
Step5: Calculate hours as
 
           hours=time2/3600   
           time3=time2 mod 3600
Step7: Calculate minutes as  
  
           minutes=time/60  
           time4=time3 mod 60  
Step8: calculate seconds as  
  
          seconds=time4  
step9: print days, hours, minutes, and seconds  
step10: STOP   
# flowchart  
```mermaid
  graph TD  
  A([START]) -->B[/ Input file_size/]-->b[time =file_size/transmission_rate]-->c[days = time/86400  time2=time mod 86400]-->d[hours=time2/3600   time3=time2 mod 3600]-->e[ minutes=time/60  time4=time3 mod 60]-->f[seconds=time4]-->g[/print days, hours, minutes, and seconds/]-->h([STOP])  
  style h fill: stroke:#444,stroke-width:4px,font-size:20px  
  style A fill: stroke:#444,stroke-width:4px,font-size:20px 