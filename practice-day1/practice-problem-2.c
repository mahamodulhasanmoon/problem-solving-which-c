#include <stdio.h>

/**
 * ======== === === === ========================================
 * === === --------- Problem 1 --------- === ===

You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

For example:
Inputs are 5 and 2
Then you’ll give output as:
5 + 2 = 7
5 - 2 = 3
5 * 2 = 10
5 / 2 = 2.50


 * ===========================================================
*/

int main(){

int a, b;

scanf("%d %d",&a, &b);
 int sum = a + b;
 int subs = a - b;
 int multiplication = a * b;
 float division = a*1.0 /b;
printf("%d + %d = %d \n",a,b,sum);
printf("%d - %d = %d \n",a,b,subs);
printf("%d * %d = %d \n",a,b,multiplication);
printf("%d / %d = %0.2f \n",a,b,division);


    return 0;
}