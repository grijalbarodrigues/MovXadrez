#include <stdio.h>

int main (){

    int numero;

    do{
        printf("Digite um numero par para sair do codigo: \n");
        scanf("%d", &numero);

        if(numero %  2 == 0){
            printf("%d esse numero é par.\n", numero);   
        }else{
            printf("%d é impar\n", numero);
        }
    }while (numero % 2 != 0);

    printf("Você digitou um nnumero par e esta saindo do programa\n");
    

    return 0;
}