#include <stdio.h>

int main(){

    int grades[] = {10,98,76,45,56};

    size_t gradesLength = sizeof(grades);
    int numElements = (int)((gradesLength)/sizeof(int));

    for(int i=0;i<numElements;i++){
        printf("The element at %i is %i\n",(i+1),grades[i]);
    }

    return 0;
};