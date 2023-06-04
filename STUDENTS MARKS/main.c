#include <stdio.h>
#include <stdlib.h>

int main()
{
     float mark1, mark2, mark3, average;

    // Input marks from the user
    printf("Enter mark 1: ");
    scanf("%f", &mark1);
    printf("Enter mark 2: ");
    scanf("%f", &mark2);
    printf("Enter mark 3: ");
    scanf("%f", &mark3);

    // Calculate the average
    average = (mark1 + mark2 + mark3) / 3;

    // Grade the student based on the average
    if (average < 50) {
        printf("FAIL\n");
    } else {
        printf("PASS\n");
    }
   return 0;

}
