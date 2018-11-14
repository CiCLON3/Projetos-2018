#include<stdio.h>
#define PI 3.14159

int main()
{
    float raio,aCirculo,cCirculo;

    printf("Digite o raio\n");
    scanf("%f",&raio);
    aCirculo=PI*raio*raio;
    cCirculo=2*PI*raio;
    printf("Area do Circulo: %.6f\nCircunferencia do Circulo: %.6f\n",aCirculo,cCirculo);
    return(0);
}
