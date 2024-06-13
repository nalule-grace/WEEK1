#include <stdio.h>

//swaping function
void swapValue(int *x, int *y){
    int now = *x;
    *x = *y;
    *y = now;

    }   

int main(){

 int value1 = 35;
 int value2 = -97;

 printf("before  value1 =%d ,value2 = %d\n", value1, value2 );

 swapValue(&value1, &value2);

 printf("after value1 = %d, value2 =%d\n", value1, value2) ;


}

 

       
