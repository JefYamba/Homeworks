#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	
    int dim, i;
    printf("Enter the size of the array : ");
    scanf("%d",&dim);

    int array[dim];
    double mean, variance, standardDeviation, sum = 0, sumD = 0;

    for (i = 0; i < dim; i++)
    {
        printf("Enter value %d : ", i+1);
        scanf("%d",&array[i]);

        sum += array[i];
    }

    mean = sum/dim;

    for (i = 0; i < dim; i++)
    {
        sumD += pow(array[i] - mean, 2);
    }

    variance = sumD / (dim - 1);
    standardDeviation = sqrt(variance);

    printf("Mean ................ = %.2lf \n", mean);
    printf("Variance ............ = %.2lf \n", variance);
    printf("Standard deviation .. = %.2lf \n", standardDeviation);

    getch() ;
}
