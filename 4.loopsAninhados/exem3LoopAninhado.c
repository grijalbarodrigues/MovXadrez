#include <stdio.h>

int main (){

    for (int i = 1; i<=6; i++){
        for(int j=1; j<=6; j++){
            if ((i+j)%2 == 0){
                printf("%d , %d\n", i, j);
            }
        }
    }

    return 0;
}