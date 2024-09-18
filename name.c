#include <stdio.h>

#define CSTR_MAX_LEN 100

int main(){
    printf("Enter your name: ");
    char name[CSTR_MAX_LEN+1];
    scanf("%s",name);
    printf("Hello %s !!!\n",name);
    char * ai_name = "ChatGPT";
    printf("Hello my name is %s\n",ai_name);
};