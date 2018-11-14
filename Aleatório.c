#include<stdio.h>
#include<math.h>
#define MAXSIZE 10

void main()
{
    float x[MAXSIZE];
    int i,n;
    float average,variance,std_deviation,sum=0,sum1=0;
    printf("Digite o valor de N\n");
    scanf("%d",&n);
    printf("Digite %d numeros reais\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%.2f",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    average=sum/(float)n;
    for(i=0;i<n;i++)
    {
        sum1=sum1+pow((x[i]-average),2);
    }
    variance=sum1/(float)n;
    std_deviation=sqrt(variance);
    printf("Media de todos os elementos = %.2f\n",average);
    printf("Variacao de todos os elementos = %.2f\n",variance);
    printf("Desvio padrao = %.2f\n",std_deviation);
}
