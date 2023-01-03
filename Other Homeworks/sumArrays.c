#include <stdio.h>
#include <stdlib.h>

#define DIM 5

int main(void)
{
    int array1[DIM][DIM], array2[DIM][DIM], sumArrays[DIM][DIM];

    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            array1[i][j] = rand()%100 + 1;
            array2[i][j] = rand()%100 + 1;

            sumArrays[i][j] = array1[i][j] + array2[i][j];
        }
        
    }

    for (int i = 0; i < DIM; i++)
    {
        for (int j = 0; j < DIM; j++)
        {
            printf("sumArrays[%d][%d] = %d + %d = %d \n", i+1, j+1, array1[i][j], array2[i][j], sumArrays[i][j]);
        }
        
    }
    
    return EXIT_SUCCESS;
}