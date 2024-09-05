/* Write a C program to check whether a triangle can be formed with the given
values for the angles.*/

#include <stdio.h>

int main() {
    int angle1, angle2, angle3, sum;

    // Input the three angles
    printf("Enter the first angle: ");
    scanf("%d", &angle1);

    printf("Enter the second angle: ");
    scanf("%d", &angle2);

    printf("Enter the third angle: ");
    scanf("%d", &angle3);

    // Calculate the sum of the angles
    sum = angle1 + angle2 + angle3;

    // Check if the sum is 180 degrees
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("A triangle can be formed with the given angles.\n");
    } else {
        printf("A triangle cannot be formed with the given angles.\n");
    }

}

