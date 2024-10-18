#include <stdio.h>

int main() {
    float temperatura;
    int aumenti = 0, diminuzioni = 0;
    float tempPrecedente = 5.0;

    printf("Inserisci le temperature di 10 giorni:\n");

    for (int i = 0; i < 10; i++) {
        printf("Giorno %d: ", i + 1);
        scanf("%f", &temperatura);

        if (temperatura > tempPrecedente) aumenti++;
        else if (temperatura < tempPrecedente) diminuzioni++;

        tempPrecedente = temperatura;
    }

    printf("Aumenti: %d\nDiminuzioni: %d\n", aumenti, diminuzioni);

    return 0;
}
