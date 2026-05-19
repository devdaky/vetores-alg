#include <stdio.h>
#include <stdlib.h>

int main() {

    int v[10];
    int i;
    int soma = 0;
    float media;

    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }
   
    for(i = 0; i < 10; i++) {
        soma = soma + v[i];
    }

    media = soma / 10.0;

    printf("Media = %.2f\n", media);

    system("pause");
    return 0;
}
