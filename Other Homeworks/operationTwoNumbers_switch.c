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

        switch (operator)
        {
        case '+' :
            result = num1 + num2;
            break;
        case '-' :
            result = num1 - num2;
            break;
        case '/' :
            result = num1 / num2;
            break;
        case '*' :
            result = num1 * num2;
            break;
        default:
            break;
        }

        printf("Result : %.2f", result);
    }
    else
    {
        printf("Invalid operator ...");
    }

    return EXIT_SUCCESS;
}