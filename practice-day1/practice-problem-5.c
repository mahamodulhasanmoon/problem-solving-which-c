#include <stdio.h>

/**
 * ======== === === === ========================================
 * === === --------- Problem 5 --------- === ===

You need to take one integer value as input and tell if the value is positive or negative or zero.



 * ===========================================================
*/

int main(){

int balance;

scanf("%d",&balance);

printf("balance: %d \n",balance);
if (balance>=6500 && balance < 10000)
{
   printf("Levis Bag");
}else if(balance>=  10000  && balance < 20000){
    printf("Gucci Bag");
}else if(balance>=25400){
    printf("Gucci Bag \n Gucci Belt");
}else{
    printf("Something for new market");
}





    return 0;
}