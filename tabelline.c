#include <stdio.h>

int main() {
    int numero, tabellina, i;

    numero = 0;

    printf("Digita il numero di una tabellina: ");
    scanf("%d", &tabellina);

    for(i=1; i<=10; i++) {
        printf("\n %d", numero+=tabellina);
    }

    return 0;
}