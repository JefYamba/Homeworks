#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int dim_x,dim_y;
    printf("Enter the dimension values of matrix (rows >= 3 and columns >= 3) : \n");
    printf("   row .. : ");
    scanf("%d", &dim_x);
    printf("   column : ");
    scanf("%d", &dim_y);
    
    if (dim_x < 3 || dim_y < 3)
    {
        printf("\n(rows < 3 or columns < 3) \nOperation not processed ...\n");
    }
    else
    {
        int f[dim_x][dim_y], v[3][3], g[dim_x][dim_y];

        for (int i = 0; i < dim_x; i++)
        {
            for (int j = 0; j < dim_y; j++)
            {
                f[i][j] = rand()%255 + 1;
                g[i][j] = 0;
            }
            
        }

        printf("\nMatrix v (Filter) : \n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("v[%d][%d] : ", i+1, j+1);
                scanf("%d", &v[i][j]);
            }
            
        }

        /*
        for (int x = 0; x < dim_x-2 ; x++)
        {
            for (int y = 0; y < dim_y-2; y++)
            {
                int sum = 0;
                for (int i = x, m = 0; i < x+3 && m < 3; i++, m++)
                {
                    for (int j = y, n = 0; j < y+3 && n < 3; j++, n++)
                    {
                        sum += f[i][j] * v[m][n];
                    }
                }
                g[x+1][y+1] = sum;
            }
            
        }
        */

       for (int x = 1; x < dim_x-1 ; x++)
        {
            for (int y = 1; y < dim_y-1; y++)
            {
                int sum = 0;
                for (int i = x-1, m = 0; i < x+2 && m < 3; i++, m++)
                {
                    for (int j = y-1, n = 0; j < y+2 && n < 3; j++, n++)
                    {
                        int a, b;
                        a = (i >= 0)? i : dim_x - 1 ;
                        b = (j >= 0)? j : dim_y - 1 ;

                        sum += f[a % dim_x][b % dim_y] * v[m][n];
                    }
                }
                g[x][y] = sum;
            }
            
        }

    /*************************     Prints     ******************************/

        printf("\nMatrix f (image matrix): \n");
        for (int i = 0; i < dim_x; i++)
        {
            for (int j = 0; j < dim_y; j++)
            {
                printf("%5d", f[i][j]);
            }
            printf("\n");
            printf("\n");
        }

        printf("\nMatrix v (filter matrix) : \n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%5d", v[i][j]);
            }
            printf("\n");
            printf("\n");
        }

        printf("\nMatrix g (output matrix): \n");
        for (int i = 0; i < dim_x; i++)
        {
            for (int j = 0; j < dim_y; j++)
            {
                printf("%5d", g[i][j]);
            }
            printf("\n");
            printf("\n");
        }
    }
    

    return EXIT_SUCCESS;
}
