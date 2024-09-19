#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int age;
}person;

int main(){
    //Wrote (person *) before malloc because it returns a void pointer that doesn't have a type 
    //You're basically typecasting 
    person *myperson = (person *) malloc(sizeof(person));

    myperson->age = 2;
    myperson->name = "Bob";

    printf("Hello %s who is %d years old\n",myperson->name, myperson->age);

    free (myperson);
}