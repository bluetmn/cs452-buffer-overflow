# Overview

In this project, you will implement a vulnerable C program which has a buffer overflow vulnerability. You will then demonstrate how you can win a game which is supposed to be unwinnable. You achieve this goal via exploiting the buffer overflow vulnerability.

# Specification

We will determine you win the game if the program prints "You won!". 

- You are not allowed to change the main function(). 
- You can change your_fcn() in whatever ways as you like, but you must exploit a buffer overflow vulnerability, as opposed to an integer overflow vulnerability.
- Your must use your seat number as your buffer size - this guarantees everyone's solution would be different.
- Hardcoding is okay.

# Due Date

23:59pm, 01/17/2022. Late submissions will not be accepted/graded.

# Grading Rubric

All grading will be executed on onyx.boisestate.edu. Submissions that fail to compile will not being graded.

- [10 pts] Compiler warnings ALL files.
Each compiler warning will result in a 3 point deduction.
You are not allowed to suppress warnings.
- [35 pts] You win everytime when the program runs.
- [5 pts] Documentation: README.md file (replace this current README.md with a new one using the template on the course page)

# Acknowledgment

This project is borrowed from University of Maryland (CMSC 414: Computer and Network Security), with some slight changes.
