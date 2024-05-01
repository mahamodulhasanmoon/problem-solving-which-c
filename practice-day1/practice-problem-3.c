#include <stdio.h>

/**
 * ======== === === === ========================================
 * === === --------- Problem 3 --------- === ===

You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.
See the sample input and output for more clarification.



 * ===========================================================
*/

int main(){

int val;

scanf("%d",&val);
if(val <= 0){
printf("Invalid Input\n");
    return 0;
}

if (val!= 0 && val % 2== 0)
{
   printf("%d is an even Number",val);
}else{
    printf("%d is an Odd Number",val);
}





    return 0;
}