#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    float area;
    {
    //while(r!=0)
    printf("Digite o raio do circulo: ");
    scanf("%d",&r);

    area=PI*r*r;
    printf("\nArea do circulo eh :%.2f\n",area);

   //printf("Para sair digite '0'");

    return(0);
    }
}
