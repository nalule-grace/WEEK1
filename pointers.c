#include <stdio.h>

int main(){
  //function1 change value of a pointer
    int x =10;
    int *p1, *p2;
    p1 = &x;
    p2 = &x;

    printf("First value of x: %d\n" ,x);

    *p1 = 4;

    int new = *p2;

    printf("Second value of x: %d\n" ,new);
    return 0;

}
