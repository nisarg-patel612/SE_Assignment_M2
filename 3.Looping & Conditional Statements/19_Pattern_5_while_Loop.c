/* Pattern - 5
 		  *
        * * *
     * * * * *
  * * * * * * *
* * * * * * * * *
*/

#include <stdio.h>
main() 
{
    int r = 1, space, stars;

    while (r <= 5) {
        // Print leading spaces
        space = 5 - r;     // calculates how many spaces to print before the starts each row
        while (space > 0) {
            printf("  ");  // Two spaces for better alignment
            space--;
        }

        // Print stars
        stars = 1;
        while (stars <= (2 * r - 1)) {
            printf("* ");
            stars++;
        }

        // Move to the next line after each row
        printf("\n");
        r++;
    }
}

