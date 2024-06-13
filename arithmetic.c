#include <stdio.h>

int main(){
    int aray[5] = {1, 2, 3, 4, 5};
    int *ptr = &aray[4];

    while (ptr >= aray){
        printf("%d\n", *ptr);
        ptr--;
    }
    return 0;
}