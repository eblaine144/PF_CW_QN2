# PF_CW_QN2
Divisor Finder
Description

This is a simple C++ program designed to read a positive integer from the user and then display all the positive divisors of that integer in a column, sorted in decreasing order. The program allows the user to perform this operation multiple times. If the user enters a negative number or zero, the program will terminate or prompt the user to enter a valid positive integer.

Features

- Reads a positive integer from the user.
- Displays all positive divisors of the integer in decreasing order.
- Allows the user to repeat the process for as many integers as desired.
- Terminates when a non-positive integer (negative number or zero) is entered.
- Provides a user-friendly interface with clear instructions.

Getting Started

Prerequisites

To compile and run this program, you will need:

- A C++ compiler (such as Dev C++) installed on your machine.
- Basic knowledge of C++ programming.
- A terminal or command prompt to run the program.

 Installation

1. Clone this repository to your local machine using:
   bash
   git clone https://github.com/eblaine144/PF_CW_QN2.git
   
2. Navigate to the project directory:
   bash
   cd PF_CW_QN2
   

Compiling the Program

To compile the C++ source code, use a C++ compiler. Run the following command in your terminal:

bash
Dev C++o DivisorFinder divisor_finder.cpp

Running the Program

After compiling, you can run the program with the following command:

bash
./DivisorFinder


Usage

1. Run the program using the command provided above.
2. The program will prompt you to enter a positive integer.
3. After entering the integer, the program will display its divisors in decreasing order.
4. You will be asked if you want to check another integer:
   - Enter 'Y' or 'y' to continue.
   - Enter 'N' or 'n' to exit the program.
5. If a non-positive integer is entered, the program will display a message and prompt for a valid input.

Example Output


This program is designed to exhibit the positive divisors of positive integers supplied by you.
Please enter a positive integer: 36
Divisors of 36 in decreasing order:
36
18
12
9
6
4
3
2
1
Would you like to see the divisors of another integer (Y/N)? y
Please enter a positive integer: -44
-44 is not a positive integer.
Please enter a positive integer: 0
0 is not a positive integer.
Please enter a positive integer: 45
Divisors of 45 in decreasing order:
45
15
9
5
3
1
Would you like to see the divisors of another integer (Y/N)? n
Program terminated. Thank you.

Acknowledgements

- Thank you to all my lecturers. 
- This project was created as part of a C++ programming assignment.
