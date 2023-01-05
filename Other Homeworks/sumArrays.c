#include <stdio.h>
#include <conio.h>

#define DIM 5

int main(void)
{
    int i, j, array1[DIM][DIM], array2[DIM][DIM], sumArrays[DIM][DIM];

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            array1[i][j] = rand()%100 + 1;
            array2[i][j] = rand()%100 + 1;

            sumArrays[i][j] = array1[i][j] + array2[i][j];
        }
        
    }

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            printf("sumArrays[%d][%d] = %d + %d = %d \n", i+1, j+1, array1[i][j], array2[i][j], sumArrays[i][j]);
        }
        
    }
    
    getch();
}
