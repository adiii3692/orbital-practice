#include <stdio.h>

int main(){

    //This is ideally how you make structs and use them
    struct point
    {
        /* data */
        int x;
        int y;
    };

    struct point p;
    p.x = 2;
    p.y = 3;

    //This is how you use them with typedef formats
    typedef struct
    {
       int x;
       int y;
    }point2;

    point2 p2;
    p2.x = 3;
    p2.y = 4;


    //Structs can also hold pointers
    typedef struct
    {
        /* data */
        char * brand;
        char * model;

    }car;
    
    car myCar;
    myCar.brand = "Ford";
    myCar.model = "Mustang";

    printf("I have a %s %s\n",myCar.brand,myCar.model);

    
}   

typedef struct {
    int a;
    int b;
} q10_t;

enum error_t{
    SUCCESS = 0,
    FAIL = 1
};

enum error_t q10(q10_t *q10) {
    q9((*q10).a,(*q10).b);
}