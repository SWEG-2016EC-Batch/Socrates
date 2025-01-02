1. Start
2. Declare variables: num, original_num, count, rev = 0
3. Read num
4. Set original_num = num
5. Initialize count to 0
6. While num is not equal to 0
    - Divide num by 10
    - Increment count by 1
7. Read choice
8. Switch based on choice
    - Case 'A':
        - Initialize rev = 0
        - While num is not equal to 0
            - Calculate rev = rev * 10 + num % 10
            - Divide num by 10
        - Output "The reverse of the number is: " + rev
    - Case 'B':
        - Output "The number of Digits in the number is: " + count
    - Case 'C':
        - Initialize product = 1
        - While num is not equal to 0
            - Get the digit by num % 10
            - If the digit is even, multiply product by the digit
            - Divide num by 10
        - Output "The product of the even digits in the given number is: " + product
    - Case 'D':
        - Initialize sum = 0
        - Get the last digit and add it to the first digit
        - Output the sum
    - Case 'E':
        - Extract the first, middle, and last digits
        - Swap the first and last digits
        - Output the swapped number
    - Case 'F':
        - Check if the number is a palindrome or not
        - Output the result
    - Case 'G':
        - Initialize an array to store digit frequencies
        - Extract digits and count their frequency
        - Print the digit frequencies in a table format
    - Case 'H':
        - Calculate the sum of factorials of digits
        - Check if the number is a strong number
        - Output the result
    - Case 'I':
        - Calculate the sum of proper divisors of the number
        - Check if the number is a perfect number
        - Output the result
    - Default:
        - Output "Invalid choice"
9. End the program.
