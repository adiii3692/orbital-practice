#include <stdio.h>

void print_big(int num);
int main(); 

void print_big(int num){
    if (num>10){
        printf("%d is big\n",num);
    }
    else{
        printf("%d is not big\n",num);
    }
}

int main(){
    printf("Enter a number: ");
    int number;
    scanf("%d",&number);
    print_big(number);
    return 0;
}