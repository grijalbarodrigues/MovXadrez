#include <stdio.h>

int main (){

    int i = 1;//declarando a variavel

    while (i <=5)// while vai sempre executar o cogido sempre q a condicao entre parenteses for VERDADEIRA
    //LEMBRANDO Q A CONDICAO É BOOLEANA - VERDADEIRO OU FALSO
    {
        printf("%d\n", i);
        i++; // evita o loop infinito (seja incrementando ou decrementando)
    }// vai finalizar o while quando a condiccao la do parenteses for FALSA
    
    return 0;
}