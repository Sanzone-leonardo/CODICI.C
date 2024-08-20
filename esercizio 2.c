#include <stdio.h>

int main(){
    int primo_numero;
    int secondo_numero;
    int media;

    printf("inserisci il primo numero\n|");
    scanf("%d", &primo_numero);

    printf("inserisci secondo numero\n");
    scanf("%d", &secondo_numero);

    media = (primo_numero + secondo_numero) / 2.0;

    printf("la media dei due numeri e': %d\n", media);
}