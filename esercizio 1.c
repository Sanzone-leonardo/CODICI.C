#include <stdio.h>

int main(){
    int primo_numero;
    int secondo_numero;
    int somma;

    printf("inserisci il primo numero\n|");
    scanf("%d", &primo_numero);

    printf("inserisci secondo numero\n");
    scanf("%d", &secondo_numero);

    somma = primo_numero * secondo_numero;

    printf("la somma dei due numeri e': %d\n", somma);
}