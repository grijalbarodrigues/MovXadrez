#include <stdio.h>

int main (){
    //do-while
    //executa pelo menos uma vez o codigo
    //variante do while
    //ideal para menus interativos, entrada do usuario e verifica condicao posterior

    int i = 1;

    do {
        printf("%d\n", i);
        i++;

    }while (i <= 5);
    
    

    return 0;
}