#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char operator;
    float num1, num2, result;

    printf("Type of operation (+,-,/,*) : ");
    scanf("%c", &operator);
    
    printf("Number 1 : ");
    scanf("%f", &num1);
    printf("Number 2 : ");
    scanf("%f", &num2);

    if ((operator == '+') || (operator == '-') || (operator == '/') || (operator == '*'))
    {
        if (operator == '+')
        {
            result = num1 + num2;
        }
        else if (operator == '-')
        {
            result = num1 - num2;
        }
        else if (operator == '/')
        {
            result = num1 / (float) num2;
        }
        else if (operator == '*')
        {
            result = num1 * num2;
        }

        printf("Result : %.2f", result);
    }
    else
    {
        printf("Invalid operator ...");
    }

    return EXIT_SUCCESS;
}