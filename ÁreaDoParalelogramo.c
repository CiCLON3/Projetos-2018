#include<stdio.h>
int main()
{
    float area,base,altura;
    printf("Digite a base e altura do paralelogramo: \n");
    scanf("%f%f",&base,&altura);

    area=base*altura;
    printf("Area do paralelogramo e: %.3f\n",area);
    return 0;
}
