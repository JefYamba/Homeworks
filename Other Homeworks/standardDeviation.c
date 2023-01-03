#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int dim;
    printf("Enter the size of the array : ");
    scanf("%d",&dim);

    int array[dim];
    double mean, variance, standardDeviation, sum = 0, sumD = 0;

    for (int i = 0; i < dim; i++)
    {
        printf("Enter value %d : ", i+1);
        scanf("%d",&array[i]);

        sum += array[i];
    }

    mean = sum/dim;

    for (int i = 0; i < dim; i++)
    {
        sumD += pow(array[i] - mean, 2);
    }

    variance = sumD / (dim - 1);
    standardDeviation = sqrt(variance);

    printf("Mean ................ = %.2lf \n", mean);
    printf("Variance ............ = %.2lf \n", variance);
    printf("Standard deviation .. = %.2lf \n", standardDeviation);

    return EXIT_SUCCESS;
}