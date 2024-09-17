#include <stdio.h>

#define BOOL char
#define TRUE 1
#define FALSE 0

int main(){
    int a = 1;
    float b = 4.5;
    double c = 5.25;
    double sum = a+b+c;

    printf("The sum is: %lf",sum);
    return 0;
};