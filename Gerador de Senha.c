#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i,password,TAM;
    srand((unsigned int)time(NULL));
    printf("Digite o Tamanho da Senha e deve ser maior que 5\n");
    scanf("%d",&TAM);
    if(TAM>=5)
    {
        for(i=0;i<TAM;i++)
        {
            int k=rand()%128;
            if((k>=48&&k<=57)||(k>=65&&k<=90)||(k>=97&&k<=122)||(k>=35&&k<=37)||k==64)
            {
                printf("%c",k);
            }
            else
            {
                i--;
            }
        }
        printf("\n");
    }
    else
    {
        printf("Tamanho deve ser maior que 5\n");
    }
    return(0);
}
