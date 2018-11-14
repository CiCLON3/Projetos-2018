#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char*meses[]={"Mar","Abr","Mai","Jun","Jul","Ago","Set","Out","Nov","Dez","Jan","Fev"};
char*dias[]={"domingo","segunda","terca","quarta","quinta","sexta","sabado"};
int Dia(int data,int mes,int ano);
main()
{
    int k,m,ano,i,flag=0,datas;
    char str[3],dia[100];
    printf("Digite as 3 primeiras letras do mes do ano ex:-Para Janeiro digite Jan\n");
    scanf("%s",str);

        for(i=0;i<12;i++)
        {
            if(!strcmp(str,meses[i]))
            {
                m=i+1;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Mes Invalido\n");
            exit(0);
        }
        printf("Digite o ano\n");
        scanf("%d",&ano);
        if(m==1||m==3||m==5||m==6||m==8||m==10||m==11)
        {
            datas=31;
        }
        if(m==2||m==4||m==7||m==9)
        {
            datas=30;
        }
        if(m==12)
        {
            if(ano%400==0)
            {
                datas=29;
            }
            else if(ano%100==0)
            {
                datas=28;
            }
            else if(ano%4==0)
            {
                datas=29;
            }
            else
            {
                datas=28;
            }
        }
        printf("Domingo--Segunda--Terca--Quarta-----Quinta-----Sexta---Sabado\n");
        for(i=1;i<=datas;i++)
        {
            int diaFinal=Dia(i,m,ano);
            if(diaFinal==0)
                printf("%4d",i);
            if(diaFinal==1)
            {
                if(i!=1)
                    printf("%8d",i);
                else
                    printf("%12d",i);
            }
            if(diaFinal==2)
            {
                if(i!=1)
                    printf("%8d",i);
                else
                    printf("%20d",i);
            }
            if(diaFinal==3)
            {
                if(i!=1)
                    printf("%9d",i);
                else printf("%29d",i);
            }
            if(diaFinal==4)
            {
                if(i!=1)
                    printf("%11d",i);
                else
                    printf("%40d",i);
            }
            if(diaFinal==5)
            {
                if(i!=1)
                    printf("%10d",i);
                else
                    printf("%50d",i);
            }
            if(diaFinal==6)
            {
                if(i!=1)
                    printf("%8d\n",i);
                else
                    printf("%58d\n",i);
            }
        }
        printf("\n");
}
int Dia(int k,int m,int ano)
{
    int D,C,i,f,diaFinal,flag=0;
    char dia[100];
    if(k<=0||k>31)
    {
        printf("Data Invalida\n");
        exit(0);
    }
    if(m==11||m==12)
    {
        ano=ano-1;
    }
    D=ano%100;
    C=ano/100;
    f=(k+(((13*m)-1)/5)+D+(D/4)+(C/4))-(2*C);

    if(f>=0)
    {
        diaFinal=f%7;
    }
    else
    {
        diaFinal=((f%7)+7)%7;
    }
    return(diaFinal);
}
