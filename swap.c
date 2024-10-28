#include <stdio.h>
#include <stdint.h>

int main();
int swap(int *x, int *y);

int main(){
    int x = 6;
    int y = 5;
    swap(&x,&y);
    printf("x: %d\n",x);
    printf("y: %d\n",y);
}

int swap(int *x,int *y){
    int c = (*x)+(*y);
    *x = c - (*x);
    *y = c - (*x);
    return c;
}