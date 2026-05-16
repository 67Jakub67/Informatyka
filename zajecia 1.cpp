#include <iostream>
#define N 10

int main() {
    int tab[N];

    printf("Wprowadz %d liczb do tablicy:\n", N);
    for (int k = 0; k < N; k++) {
        printf("Podaj liczbe [%d]: ", k);
        scanf("%d", &tab[k]);
    }

    for (int k = 0; k < N; k++) {
        printf("tab[%d] = %d \n", k, tab[k]);
    }


    int suma = 0;
    for (int k = 0; k < N; k++) {
        suma += tab[k];
    }
    float srednia = (float)suma / N;
    printf("average = %.1f \n", srednia);


    int wart_min = tab[0];
    for (int k = 0; k < N; k++) {
        if (tab[k] < wart_min) {
            wart_min = tab[k];
        }
    }
    printf("minimum = %d \n", wart_min);


    int wart_max = tab[0];
    for (int k = 0; k < N; k++) {
        if (tab[k] > wart_max) {
            wart_max = tab[k];
        }
    }
    printf("maximum = %d \n", wart_max);


    for (int x = 0; x < N - 1; x++) {
        for (int y = 0; y < N - x - 1; y++) {
            if (tab[y] > tab[y + 1]) {
                int zamiana = tab[y];
                tab[y] = tab[y + 1];
                tab[y + 1] = zamiana;
            }
        }
    }

    float med = (float)(tab[N / 2 - 1] + tab[N / 2]) / 2;
    printf("mediana = %.1f\n", med);

    return 0;
}