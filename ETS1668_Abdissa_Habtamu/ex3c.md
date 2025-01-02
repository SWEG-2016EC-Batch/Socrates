Pseudo code 
Step :start
Step 2: read num 
             even<--1
Step 3:if num < 0 
             num<-- (-)num
Step 4:else compute:
        digit<--num % 10
      4.1  If digit % 2 = 0:
            even <-- even * digit
            num <-- num / 10
Step 5: if num > 0 go to step 4
             else go to step 6 
Step 6: print product
Step 7: stop
