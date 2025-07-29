#include <stdio.h>

int main (){

    int opcao;

    do {
        printf("Escolha uma opção:\n");
        printf("1. OPÇÃO 1\n");
        printf("2. OPÇÃO 2\n");
        printf("3. SAIR!\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);

            switch (opcao)
            {
            case 1:
                printf("Voce escolheu a opcao 1\n");
                break;
            case 2:
                printf("Voce escolheu a opcao 2\n");
                break;
            case 3:
                printf("SAINDO...\n");
                break;
            
            default:
                printf("Opção invalida\n");    
            break;
            }

    }while (opcao != 3);
    


    return 0;
}