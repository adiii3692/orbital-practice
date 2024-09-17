#include <stdio.h>

int main(){

    int rows;
    printf("Enter the number of rows: ");
    scanf("%i",&rows);

    int columns = rows+1;
    int matrix[rows][columns];

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            
            if ((j<=(i-1))&&((i-1)>=0)){
                printf("0 ");
                continue;
            }
            printf("%i%i ",(i+1),(j+1));
        }
        printf("\n");
    }

    return 0;
};