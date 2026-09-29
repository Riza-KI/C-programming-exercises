C programming Exercises
Book Reference: Deitel & Deitel, C How to Program, 9th Edition.
 

This repository contains 8 C programs demonstrating concepts covered in Chapters 2, 3, and 4 How to Program
Each program is located in its own folder and is named exercise.c.


Exercise 1 - Basic Output
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.3(e).
What the program does:
 The program simply displays the message "This is a C program." on the screen.

Concepts used: "printf()",  escape sequences ("\n").

How it works:
The program contains a single "printf" statement, to display the required message. The "\n " moves the cursor to the next line after displaying the message.

Example Run:

This is a C program.

Exercise 2 - Input - Process - Output
Source:Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.16.

What the program does:
 The program asks the user to enter two integers. It then calculates and displays their sum, product, difference, quotient, and remainder.
Concepts used:int,variables, scanf(), printf(), arithmetic operators (+, -, *,/, %).

How it works:The program first prompts the user for two numbers and reads them using scanf.
 It then performs the five arithmetic operations and prints the results.

Example Run:

Enter first integer: 10
Enter second integer: 3

Sum: 13
Product: 30
Difference: 7
Quotient: 3
Remainder: 1

Exercise 3 - Decision

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 2, Exercise 2.18.

What the program does:
 The program asks the user for the highest recorded rainfall and the current year's rainfall. It checks if the current rainfall exceeds the highest record and prints an appropriate message.

Concepts used:
 int, variables, scanf, if...else statement, relational operator (`>`).

How it works:

 The program reads two integer values. It then uses an `if` statement to check if `currentRainfall > highestRainfall`. If true, it prints a message saying the record was broken and updates the `highestRainfall` variable. If false, the `else` block prints a message stating that the current rainfall did not exceed the record.

Example Run:

Enter the highest rainfall ever recorded(mm): 100
Enter the rainfall in the current year(mm): 120

The current rainfall (120mm) exceeds the highest record (100mm)!
New highest rainfall recorded: 120mm

 Exercise 4 - Basic Loop
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 3, Exercise 3.24 .
What the program does:
The program prints a table of values for N, N², N³, and N⁴ for N from 1 to 5.

Concepts used:
 for loop, arithmetic calculations, escape sequences (\t for tab).

How it works:
The "for" loop starts at 1 and continues while the value of N is less than or equal to 5. After each iteration, N is increased by 1. The program calculates the square, cube and fourth power of N and displays them.

Example Run:

N       N^2     N^3     N^4
1       1       1       1
2       4       8       16
3       9       27      81
4       16      64      256
5       25      125     625

Exercise 5 - Loop with Calculation

Source:Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.11.

What the program does:
The program calculates and prints the sum of all multiples of 7 from 1 to 100. It also first lists each multiple before showing the final total.

Concepts used:
for loop, if statement, remainder operator (%)

How it works:
The program loops from 1 to 100. Inside the loop, an if statement checks if the current number is divisible by 7 (using i % 7 == 0). If it is, the number is printed on its own line, and it is added to the sum. 
After the loop finishes, the final sum (735) is printed.

Example Run:
7
14
21
28
35
42
49
56
63
70
77
84
91
98

Sum of all multiples of 7 (1 to 100) is : 735



Exercise 6 - Loop with User Input

Source:  Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.9.

What the program does:
The program asks the user how many values they want to enter. It then reads the values entered, calculates their sum, and displays the sum and average.

Concepts used:
variables,for loop, scanf , if...else statement.

How it works:
 The program first asks for the number of values. A for loop runs that many times, it asks the user to enter a value each time and adds it to a total. 
After the loop, it calculates the average.

sample Run
Enter number of Values: 3 
Enter value 1: 10 
Enter value 2: 20 
Enter value 3: 30 
Sum = 60
Average = 20.00



 Exercise 7 - Loop with Decision

Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.22 (Modified).

What the program does:
The program processes exam results for 5 students. It counts how many passed (entered 1) and how many failed (entered 2). If more than 3 students passed, it prints "Bonus to instructor!".

Concepts used:
for loop, if...else statement, counters

How it works:

The for loop runs 5 times (once for each student). Inside the loop, the user enters a result. An if statement checks if the result is 1; if so, it increments the passes counter. Otherwise, it increments the failures counter. After the loop, the totals are printed, and a final if statement checks if passes > 3 to print the bonus message.

Example Run:

Enter result for student 1 (1=pass, 2=fail): 1
Enter result for student 2 (1=pass, 2=fail): 1
Enter result for student 3 (1=pass, 2=fail): 2
Enter result for student 4 (1=pass, 2=fail): 1
Enter result for student 5 (1=pass, 2=fail): 1

--- Exam Results ---
Passed: 4
Failed: 1
Bonus to instructor!

Exercise 8 - Interactive Console Program
Source:
 Deitel & Deitel, C How to Program, 9th Edition, Chapter 4, Exercise 4.28

What the program does:
 This is a menu-driven weekly pay calculator. 
It allows the user to calculate pay for a manager  or an hourly worker (based on hours and rate). The program keeps running until the user chooses to exit.

Concepts used:
do-while loop, switch statement, variables, user input, arithmetic operations

How it works:
The program displays a menu with three choices. The switch statement checks the choice made by the user. For an hourly worker, the program multiplies the hours worked by the hourly rate to calculate the weekly pay. The program continues displaying the menu until the user chooses 3 to exit.

Example Run:
Weekly Pay Calculator
1 - Manager
2 - Hourly Worker
3 - Exit
Enter your choice: 2
Enter hours worked: 40
Enter hourly rate: 5000

Hourly worker's weekly pay: 200000.00

Weekly Pay Calculator
1 - Manager
2 - Hourly Worker
3 - Exit
Enter your choice: 3

Exiting program.
