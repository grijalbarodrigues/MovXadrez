#include <stdio.h>

int main (){
    
    int num;

    do {
        printf("Insira um numero e se quiser sair digite um numero negativo\n");
        scanf("%d", &num);

        if(num >=0){
            printf("Você digitou: %d\n", num);
        }

    } while (num >=0);
    
    printf("Você digitou um numero negativo. Saindo..\n");
    

    return 0;
}