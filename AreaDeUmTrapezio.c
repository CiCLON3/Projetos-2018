#include<stdio.h>

int main()
{

    float a,b,h,area;

    printf("Digite o valor das duas bases e a altura do Trapezio: \n");
    scanf("%f%f%f",&a,&b,&h);
    area=0.5*(a+b)*h;
    printf("A area do Trapezio eh: %.3f",area);
    return 0;
}
