/* Pattern-4
A
A B
A B C
A B C D
A B C D E
*/

#include<stdio.h>
main() 
{
    int r, c;
    char ch;

    r = 1;
    while (r <= 5) {
        c = 1;
        ch = 'A';  
        while (c <= r) {
            printf(" %c", ch);
            ch++;  
            c++;
        }
        printf("\n");
        r++;
    }
}


