#include<stdio.h>

int main()
{
    float area,d1,d2;

    printf("Digite as diagonais do Losango: \n");
    scanf("%f%f",&d1,&d2);

    area=0.5*d1*d2;
    printf("A area do Losango e:%.3f \n",area);
    return 0;
}
