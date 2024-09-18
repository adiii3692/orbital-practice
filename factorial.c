#include <stdio.h>

int main(){
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int factorial = 1;
    int i;
    size_t arrayByte = sizeof(array);
    int arrayLength = (int)(arrayByte/(sizeof(int)));

    printf("The array length is: %d\n",arrayLength);
    for(i=0;i<arrayLength;i++){
        factorial *= array[i];
    }

    printf("10! is %d.\n", factorial);
};