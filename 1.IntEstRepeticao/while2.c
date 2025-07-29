#include <stdio.h>

int main (){

    int num;

    printf("Insira um número (negativo para sair)\n");
    scanf("%d", &num);

    while (num >= 0)
    {
        printf("Você digitou: %d\n", num);
        printf("Insira o próximo número: \n");
        scanf("%d", &num);
    }
    printf("Você digitou um numero negativo.\n");
    

    return 0;
}