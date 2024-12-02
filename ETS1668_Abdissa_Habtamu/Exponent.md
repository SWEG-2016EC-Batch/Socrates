Problem Analysis

This program calculates the power of a number. It takes two integers as input: the base number (x) and the exponent (y). The program then computes the result of raising the base to the power of the exponent using the pow() function from the <cmath> library and displays the result.


---

Input:

1. x: Base number (integer)


2. y: Exponent number (integer)



Process:

1. Prompt the user to input the base number.


2. Prompt the user to input the exponent number.


3. Use the pow(x, y) function to calculate the result:



result = x^y

Output:

A message displaying the result in the format:

The final result is <result>


---

Pseudo-code

START
  Declare variables: x, y, result

  PRINT "Enter the base number"
  INPUT x

  PRINT "Enter the exponent number"
  INPUT y

  COMPUTE result = pow(x, y)

  PRINT "The final result is", result
END


