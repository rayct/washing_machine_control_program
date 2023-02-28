

// Version: 1.0.1
// Here are some optimizations to improve the performance of the washing machine control program in C:
// 1. Use a more efficient input method: Instead of using scanf, which can be slow and unsafe, you can use fgets to read input from the user and then parse the input using sscanf.
// 2. Use a lookup table for the mode and setting names: Instead of using a switch statement to print the mode and setting names,
// you can use a lookup table that maps the mode and setting constants to their corresponding names.
// This can improve the readability of the code and reduce the number of comparisons that need to be made.
// 3. Use a do-while loop instead of a while loop: Since the loop in the program always executes at least once,
// it can be more efficient to use a do-while loop instead of a while loop. This eliminates the need to check the loop condition before the first iteration.
// Here's the optimized version of the program:

#include <stdio.h>
#include <string.h>

// Define constants for the different modes
#define MODE_OFF 0
#define MODE_DELICATE 1
#define MODE_NORMAL 2
#define MODE_HEAVY_DUTY 3

// Define constants for the different settings
#define SETTING_LOW 1
#define SETTING_MEDIUM 2
#define SETTING_HIGH 3

// Define lookup tables for mode and setting names
const char* mode_names[] = {"Off", "Delicate", "Normal", "Heavy Duty"};
const char* setting_names[] = {"", "Low", "Medium", "High"};

int main() {
    printf("Welcome to the washing machine control program!\n");

    // Define variables for input and parsing
    char input[100];
    char command[10];
    char arg[10];

    // Set the initial mode and setting
    int mode = MODE_OFF;
    int setting = SETTING_LOW;

    // Loop until the user chooses to turn off the washing machine
    do {
        // Print the current mode and setting
        printf("Current mode: %s\n", mode_names[mode]);
        printf("Current setting: %s\n", setting_names[setting]);

        // Ask the user for input
        printf("Enter a command (mode, setting, off): ");
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%s %s", command, arg);

        // Parse the input and update the mode or setting accordingly
        if (strcmp(command, "mode") == 0) {
            if (strcmp(arg, "delicate") == 0) {
                mode = MODE_DELICATE;
            } else if (strcmp(arg, "normal") == 0) {
                mode = MODE_NORMAL;
            } else if (strcmp(arg, "heavy") == 0) {
                mode = MODE_HEAVY_DUTY;
            } else {
                printf("Invalid mode\n");
            }
        } else if (strcmp(command, "setting") == 0) {
            if (strcmp(arg, "low") == 0) {
                setting = SETTING_LOW;
            } else if (strcmp(arg, "medium") == 0) {
                setting = SETTING_MEDIUM;
            } else if (strcmp(arg, "high") == 0) {
                setting = SETTING_HIGH;
            } else {
                printf("Invalid setting\n");
            }
        } else if (strcmp(command, "off") == 0) {
            mode = MODE_OFF;
        } else {
            printf("Invalid command\n");
        }
    } while (mode != MODE_OFF);

    printf("Goodbye!\n");

    return 0;
}

// Version: 1.0
// A simple washing machine control program in C:
// This program allows the user to control the mode and setting of the washing machine.
// The user can choose from three modes (delicate, normal, and heavy duty) and three settings (low, medium, and high).
// The program loops until the user chooses to turn off the washing machine.

// #include <stdio.h>

// // Define constants for the different modes
// #define MODE_OFF 0
// #define MODE_DELICATE 1
// #define MODE_NORMAL 2
// #define MODE_HEAVY_DUTY 3

// // Define constants for the different settings
// #define SETTING_LOW 1
// #define SETTING_MEDIUM 2
// #define SETTING_HIGH 3

// // Define variables for the current mode and setting
// int mode = MODE_OFF;
// int setting = SETTING_LOW;

// int main() {
//     printf("Welcome to the washing machine control program!\n");

//     // Loop until the user chooses to turn off the washing machine
//     while (mode != MODE_OFF) {
//         // Print the current mode and setting
//         printf("Current mode: ");
//         switch (mode) {
//             case MODE_DELICATE:
//                 printf("Delicate\n");
//                 break;
//             case MODE_NORMAL:
//                 printf("Normal\n");
//                 break;
//             case MODE_HEAVY_DUTY:
//                 printf("Heavy Duty\n");
//                 break;
//             default:
//                 printf("Off\n");
//         }
//         printf("Current setting: ");
//         switch (setting) {
//             case SETTING_LOW:
//                 printf("Low\n");
//                 break;
//             case SETTING_MEDIUM:
//                 printf("Medium\n");
//                 break;
//             case SETTING_HIGH:
//                 printf("High\n");
//                 break;
//         }

//         // Ask the user for input
//         printf("Enter a command (mode, setting, off): ");
//         char command[10];
//         scanf("%s", command);

//         // Parse the input and update the mode or setting accordingly
//         if (strcmp(command, "mode") == 0) {
//             printf("Enter a mode (delicate, normal, heavy): ");
//             char mode_input[10];
//             scanf("%s", mode_input);
//             if (strcmp(mode_input, "delicate") == 0) {
//                 mode = MODE_DELICATE;
//             } else if (strcmp(mode_input, "normal") == 0) {
//                 mode = MODE_NORMAL;
//             } else if (strcmp(mode_input, "heavy") == 0) {
//                 mode = MODE_HEAVY_DUTY;
//             } else {
//                 printf("Invalid mode\n");
//             }
//         } else if (strcmp(command, "setting") == 0) {
//             printf("Enter a setting (low, medium, high): ");
//             char setting_input[10];
//             scanf("%s", setting_input);
//             if (strcmp(setting_input, "low") == 0) {
//                 setting = SETTING_LOW;
//             } else if (strcmp(setting_input, "medium") == 0) {
//                 setting = SETTING_MEDIUM;
//             } else if (strcmp(setting_input, "high") == 0) {
//                 setting = SETTING_HIGH;
//             } else {
//                 printf("Invalid setting\n");
//             }
//         } else if (strcmp(command, "off") == 0) {
//             mode = MODE_OFF;
//         } else {
//             printf("Invalid command\n");
//         }
//     }

//     printf("Goodbye!\n");

//     return 0;
// }