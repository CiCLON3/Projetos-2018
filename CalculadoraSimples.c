#include <stdio.h>

int main()
{
    char operator;
    double firstNumber,secondNumber;
    printf("Escolha um OPERADOR (+, -, *,): ");
    scanf("%c",&operator);
    printf("Escolha 2 OPERADORES: ");
    scanf("%lf %lf",&firstNumber,&secondNumber);
    switch(operator)
    {
        case'+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
        break;

        case'-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
        break;

        case'*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
        break;

        case'/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
        break;

        default:
            printf("Erro! operador nao existe");
        }
    return 0;
}
