#include <stdio.h>

int arrayAdd(double *array, int array_length, int num_values, double *result);


int main(){
double array[]={1.0, 2.0, 3.0, 4.0, 5.0};
int array_length = sizeof(array) / sizeof(array[0]);
int num_values = 4;
double sum;

int status = arrayAdd(array, array_length, num_values, &sum);

if(status == 0){
    printf("sum of %d values: %.2f\n", num_values,sum);
}
else if(status == 1){
    printf("Error: NULL POINTER\n");
}
else if(status == 2){
    printf("error: number of values exceeds array length\n");
}
return 0;
}



int arrayAdd(double *array, int array_length, int num_values, double *result){
    if(array == NULL || result == NULL){
        return 1;
    }

    if(num_values >array_length){
        return 2;
    }

    *result =0.0;
    for(int i =0; i<num_values; i++){
        *result += array[i];
    
    }
    return 0;
}