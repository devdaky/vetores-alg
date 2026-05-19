#include <stdio.h>
#include <stdlib.h>

int main() {

    int v[10];
    int i;
    int pares = 0;
    int impares = 0;


    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }
   
    for(i = 0; i < 10; i++) {

        if(v[i] % 2 == 0) {
            pares++;
        }
        else {
            impares++;
        }

    }

    printf("Quantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);

    system("pause");
    return 0;
}
