#include <stdio.h>
/* The Above Line imports the stdio.h into our program for supporting input and output functions such as scanf() and printf()
without this scanf() and prinf() simply wont work 
*/

int main() {
    float cel, far; 
	/* The Above Line Initializes two variables cel and far with float datatype for handling decimal values 
	since temperature conversion might involve decimals. */

    // Taking Input for temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel); 
	/* The Above Line Reads the Celsius temperature from user input. */

    // Taking Input for temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &far); 
	/* The Above Line Reads the Fahrenheit temperature from user input. */

    // Converting Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32
    float far_conv = (cel * 9/5) + 32; 
	/* The Above Line Calculates the Fahrenheit value from Celsius. */

    // Converting Fahrenheit to Celsius using the formula: C = (F - 32) * 5/9
    float cel_conv = (far - 32) * 5/9; 
	/* The Above Line Calculates the Celsius value from Fahrenheit. */

    // Display the conversion results
    printf("%.2f Celsius is %.2f Fahrenheit\n", cel, far_conv); /* Output the converted Fahrenheit temperature. */
    printf("%.2f Fahrenheit is %.2f Celsius\n", far, cel_conv); /* Output the converted Celsius temperature. */

    return 0; 
	/* The Above Line Indicates that the program has finished successfully. */
}
