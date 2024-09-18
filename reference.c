#include <stdio.h>


typedef struct
{
    /* data */
    int x,y;
}point;

//Basic incrementing format
void incrementOne(point *p){
    (*p).x++;
    (*p).y++; 
}

//Dereferencing a structure and incrementing its values
void addOne(point *p){
    p->x++;
    p->y++;
}

int main(){
    point p;
    p.x = 2;
    p.y = 3;
    printf("Before: (%d,%d)\n",p.x,p.y);
    incrementOne(&p);
    printf("After: (%d,%d)\n",p.x,p.y);
    addOne(&p);
    printf("Another one: (%d,%d)\n",p.x,p.y);
}