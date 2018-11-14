#include <stdio.h>
#include <ctype.h>   // para tolower


FILE* fileManager(){
    FILE* arquivo;
    char modo;  //op��o
    char* nomeArquivo = "prova.txt";

    printf("Escolha um modo para abrir o arquivo \n\nG-Escritura \nL-Leitura \nA-Anexo \n\n?: ");
    scanf("%c%*c", &modo);
    modo = tolower(modo); //<-passamos a minuscula

    switch ( modo ) { //Vai verificar o modo
        case 'g':
            //G - � para grava��o,o parametro wt
            arquivo = fopen ( nomeArquivo, "wt" ); //S� permite escrever no arquivo, borra conteudo anterior
            break;

        case 'l':
            //l - � para leitura  do texto
            arquivo = fopen ( nomeArquivo, "r" ); //modo leitura, no hace falta poner t, por default ja � t, si nao por b(binario), come�a do principio.
            break;

        case 'a':
            //A- � para append(anexa��o)
            arquivo = fopen ( nomeArquivo, "a" ); //Modo Anexar s� permite escrever ao fin do arquivo, nao importa si tentar mover o descriptor de arquivo, sempre vai anexar ao fin evitando borrar conteudo.
            break;
    }


    if ( arquivo == NULL ) { //A diretiva NULL em letras maiusculas,� quando a pontar para o espa�o da memoria NULO,ou NULL,caso o arquivo n�o exista
        perror("Desculpe! "); //<-importante para saber que tipo de erro tivemos ao tentar abrir

        //fazemos uma pausa
        printf("\nPulse uma tecla para continuar...");
        scanf("%*c");

        //como nao conseguimos abrir o arquivo retornamos NULL que no apunta a nada.
        return NULL;
    }else{
        //Si conseguimos abrir informamos do exito.
        printf("O arquivo %s esta aberto em modo %s\n", nomeArquivo, (modo=='g')? "gravacao.":(modo=='a')? "anexo.": "leitura."  );
    }

    //Si chegamos aqui � por que o arquivo esta aberto e agora retornamos ele como foi pedido.
    return arquivo;
}//FIN fileManager

void finalizar ( FILE *arquivo ) { //Est� fun��o vai fechar o arquivo
    fclose ( arquivo );
}//FIN finalizar


//////MAIN////////
int main() {
    FILE* arquivo = fileManager(); //a variavel arquivo recebe o ponteiro ao arquivo.

    if( arquivo == NULL ){
        return 1; // si o programa retornar 1 � por que nao abrio o arquivo nao temos por que fechar ele, saimos aqui mesmo.
    }


    finalizar(arquivo); // si passou pela comprova�ao anterior � preciso fechar o arquivo antes de sair ja que nao vamos fazer mais nada.
    return 0;
}//FIN MAIN
