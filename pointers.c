#include <stdio.h>
#define CMAX_STR_LEN 100

int main(){
    int trial = 2;
    int *pTrial = &trial;

    *pTrial += 1;

    printf("Address of trial: %p\n",&trial);
    printf("Value of pTrial: %d\n",*pTrial);
}