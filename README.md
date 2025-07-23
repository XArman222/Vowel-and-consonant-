EXPERIMENT – Decision Statements

Aim: To study and implement decision-making statements in C++.

Apparatus: VS Code or Programiz Online Compiler

Theory:
In this experiment, we explored how C++ decision-making works using if, if-else, and switch statements. These allow the program to choose between different paths based on conditions or user input.

Program 1: Even or Odd Checker
This program asks the user to enter a number and checks whether it’s even or odd.

It uses the modulus operator % to check the remainder when the number is divided by 2.
If the remainder is 0, the number is even, else it’s odd.
The logic is wrapped inside a simple if else statement. This is a basic example of using conditionals to branch the output based on a simple test.
Program 2: Vowel or Consonant Checker
Here, the user enters a single character, and the program checks whether it’s a vowel or consonant.

It first converts the input character to lowercase using tolower() to make the comparison easier.
Then it uses a chain of OR conditions (||) inside an if-else to match against the five vowels (a, e, i, o, u).
If it matches, it prints that the character is a vowel, otherwise it's treated as a consonant. This program demonstrates how logical operators work inside conditionals.
Program 3: Largest of Three Numbers
In this program, the user is asked to enter three numbers, and the code determines which one is the largest.

It uses a combination of if, else if, and logical conditions (&&) to compare all three numbers.
It also includes a final check to see if all three numbers are equal.
This is a good example of using nested and compound conditions to compare multiple values.
Program 4: Traffic Light using Switch Case
This program simulates a simple traffic light system using a switch statement.

The user selects from three choices: 1 for Red, 2 for Yellow, and 3 for Green.
Based on the choice entered, the switch block prints the corresponding message:
Red -- Please STOP
Yellow -- Please SLOW DOWN
Green -- GET SET GO
This showcases how switch can be used instead of long if-else chains for multiple discrete choices.
Conclusion:
Through these four programs, we learned how to use decision-making statements in C++, including if, else if, else, and switch. These control structures are essential for writing programs that respond differently based on user input or program state.
