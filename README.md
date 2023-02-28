# Version 1.0.1
## A simple washing machine control program in C: This program allows the user to control the mode and setting of the washing machine. The user can choose from three modes (delicate, normal, and heavy duty) and three settings (low, medium, and high). The program loops until the user chooses to turn off the washing machine.


## Version: 1.0.1 is an Optimised version of 1.0
## Here are some of the optimizations that improve the performance of the washing machine control program in C: 
## 1. Use a more efficient input method: Instead of using scanf, which can be slow and unsafe, you can use fgets to read input from the user and then parse the input using sscanf.
## 2. Use a lookup table for the mode and setting names: Instead of using a switch statement to print the mode and setting names, you can use a lookup table that maps the mode and setting constants to their corresponding names. This can improve the readability of the code and reduce the number of comparisons that need to be made.
## 3. Use a do-while loop instead of a while loop: Since the loop in the program always executes at least once, it can be more efficient to use a do-while loop instead of a while loop. This eliminates the need to check the loop condition before the first iteration.