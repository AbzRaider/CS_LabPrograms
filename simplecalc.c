#include <stdio.h>
/* The Above Line imports the stdio.h into our program for supporting input and output functions such as scanf() and printf()
without this scanf() and prinf() simply wont work 
*/

int main() {
    char op; 
	/* The Above Line Declares a variable for the operator (e.g., +, -, *, /). */
    float n1, n2, res; 
	/* The Above Line Declares variables for the two input numbers and the result. */

    // Taking input for two numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2); 
	/* The Above Line Reads two numbers from user input. */

    // Asking user to choose an arithmetic operation
    printf("Enter operator (+, -, *, /): "); // Displays Text on screen
    scanf(" %c", &op); 
	/* The Above Line Reads the operator from user input. */

    // Perform the selected operation based on the operator using a switch-case statement
    switch (op) {
        case '+':
            res = n1 + n2; 
			/* The Above Line Performs addition. */
            break; // here the break statement is used to exit out from switch case after doing addition
        case '-':
            res = n1 - n2; 
			/* The Above Line Performs subtraction. */
            break; // here the break statement is used to exit out from switch case after doing subtraction
        case '*':
            res = n1 * n2; 
			/* The Above Line Performs multiplication. */
            break; // here the break statement is used to exit out from switch case after doing multiplication
        case '/':
                res = n1 / n2; /* The Above Line Performs division. */
                break; // here the break statement is used to exit out from switch case after doing division
            
        default:
			// If you have entered wrong input for your operator the program will execute the code in the default case.
            printf("Error: Invalid operator!\n"); 
			/* The Above Line Displays an error message for invalid operator input. */
            return 1; 
			/* The Above Line is used to stop the program from executing the remaining part code in the main function,
			as we have reached the default case. */
			break;
	}
    

    // Output the result of the calculation
    printf("The result is: %.2f\n", res); /* Output the result of the calculation. */

    return 0; 
	/* The Above Line Indicates that the program has finished successfully. */
}
