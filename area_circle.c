#include <stdio.h>
/* The Above Line imports the stdio.h into our program for supporting input and output functions such as scanf() and printf()
without this scanf() and prinf() simply wont work 
*/

#define PI 3.14159 
/* The Above Line Defines a constant value for the variable PI which cannot be changed later in the code. */

int main() {
    float r, area, cmf; 
	/* The Above Line Declares variables for the radius, area, and circumference of the circle as r,area,cmf respectively. */

    // Code for Taking input for the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &r); 
	/* The Above Line Reads the radius from user input. */

    // Calculating the area of the circle using the formula: Area = π * r^2
    area = PI * r * r; 
	/* The Above Line Calculates the area using the defined formula. */

    // Calculating the circumference of the circle using the formula: Circumference = 2 * π * r
    cmf = 2 * PI * r; 
	/* The Above Line Calculates the circumference using the defined formula. */

    // Output the results of area and circumference calculations
    printf("The area of the circle is: %.2f\n",area); /* Output the area result. */
    printf("The circumference of the circle  is: %.2f\n",cmf); /* Output the circumference result. */

    return 0; 
	/* The Above Line Indicates that the program has finished successfully. */
}
