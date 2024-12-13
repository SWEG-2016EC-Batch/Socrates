Pseudo code
Step 1: Start  
Step 2: Read num  
             rev<--0
             temp <-- num  
Step 3: Repeat while num ≠ 0  
           3.1: digit <-- num % 10  
           3.2: rev <-- (rev * 10)+ digit  
           3.3: num <-- num / 10  
Step 4: Print rev  
Step 5: If temp = rev  
           Print "The number is palindrome"  
       Else  
           Print "The number is not palindrome"  
Step 6: Stop
