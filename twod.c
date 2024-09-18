#include <stdio.h>

int main(){
    //Must have at least the y dimension
    char vowels[][2][2] = {
        {'a','e','i'},
        {'o','u',' '}
    };

    printf("Selecting a random vowel from the 2d array: %c\n",vowels[0][2]);
    return 0;
};