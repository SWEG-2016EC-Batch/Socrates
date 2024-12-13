PSEUDOCODE  
Step 1: Start   
Step 2: Read num   
Step 3: If num < 0  
             num <-- (-)num   
Step 4: Repeat while num > 0  
           4.1: digit <-- num % 10     
           4.2: freq[digit] <--freq[digit] + 1    
           4.3: num <-- num / 10    
Step 5: for 0<=i<10   
           5.1: If freq[i] > 0    
Step 6: Print i, freq[i]   
Step 7: Stop

