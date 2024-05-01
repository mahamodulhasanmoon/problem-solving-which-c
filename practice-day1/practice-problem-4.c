#include <stdio.h>

/**
 * ======== === === === ========================================
 * === === --------- Problem 5 --------- === ===

You need to take one integer value as input and tell if the value is positive or negative or zero.



 * ===========================================================
*/

int main(){

int val;

scanf("%d",&val);




if (val> 0)
{
   printf("%d is an Positive Number",val);
}else if(val<0){
    printf("%d is an Negative Number",val);
}else{
    printf("Zero");
}





    return 0;
}