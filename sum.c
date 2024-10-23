#include <stdio.h> 
/* The Above Line imports the stdio.h into our program for supporting input and output functions such as scanf() and printf()
without this scanf() and prinf() simply wont work 
*/

int main() {
    int num1, num2, num3, sum; 
	/* The Above Line Initializes the four variables with Integer (int) datatype */
	
    // Code for Taking Input for three numbers.
    printf("Enter three integers: "); // printf() is a function used in C to display data, Here we are printing letters only 
    scanf("%d %d %d", &num1, &num2, &num3); // scanf() is a function used in C for taking input from the user

    // Code for Calculating sum of three numbers
    sum = num1 + num2 + num3; 
	
    // Output the result
    printf("The sum of %d, %d, and %d is: %d\n", num1, num2, num3, sum);

    return 0;
}

