#include <stdio.h>
//add function 

double arrayAdd(double *array, int value){
 double sum = 0.0;

 for( int i=0; i<value; i++){
    sum = sum + array[i];
 }
 return sum;
}

int main(){

double array[] ={1.0, 2.0, 3.0, 4.0, 5.0};
int numOfvalues = 4;

double result= (arrayAdd(array, numOfvalues));

printf("sum of %d values : %.2f\n", numOfvalues, result);
return 0;

}