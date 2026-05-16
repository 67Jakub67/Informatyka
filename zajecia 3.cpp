#include <iostream>
#include <cstdio>

#define N 10

void readArray(int arr[], int n) {
    for (int k = 0; k < n; k++) {
        printf("Podaj liczbe [%d]: ", k);
        scanf("%d", &arr[k]);
    }
}

void showArray(int arr[], int n) {
    for (int k = 0; k < n; k++) {
        printf("arr[%d] = %d \n", k, arr[k]);
    }
}

int getMin(int arr[], int n) {
    int lowest = arr[0];
    for (int k = 0; k < n; k++) {
        if (arr[k] < lowest) {
            lowest = arr[k];
        }
    }
    return lowest;
}

int getMax(int arr[], int n) {
    int highest = arr[0];
    for (int k = 0; k < n; k++) {
        if (arr[k] > highest) {
            highest = arr[k];
        }
    }
    return highest;
}

float getMean(int arr[], int n) {
    int total = 0;
    for (int k = 0; k < n; k++) {
        total += arr[k];
    }
    float mean = (float) total / n;
    return mean;
}

float getMedian(int arr[], int n) {
    for (int x = 0; x < n - 1; x++) {
        for (int y = 0; y < n - x - 1; y++) {
            if (arr[y] > arr[y + 1]) {
                int swapVal = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = swapVal;
            }
        }
    }
    float med = (float) (arr[n / 2 - 1] + arr[n / 2]) / 2;
    return med;
}

int main() {
    printf("--- Tablice ---\n");
    int arr[N];
    int choice;

    do {
        printf("\nMENU:\n");
        printf("1. Wprowadz dane do tablicy \n");
        printf("2. Wyswietl tablice \n");
        printf("3. Oblicz wartosc minimalna \n");
        printf("4. Oblicz wartosc maksymalna \n");
        printf("5. Oblicz wartosc srednia\n");
        printf("6. Oblicz mediane  \n");
        printf("0. Wyjdz z programu \n");
        printf("Wybor: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Wprowadz %d liczb do tablicy:\n", N);
                readArray(arr, N);
                break;

            case 2:
                showArray(arr, N);
                break;

            case 3:
                printf("min = %d \n", getMin(arr, N));
                break;

            case 4:
                printf("max = %d \n", getMax(arr, N));
                break;

            case 5:
                printf("average = %.2f \n", getMean(arr, N));
                break;

            case 6:
                printf("median = %.2f\n", getMedian(arr, N));
                break;

            case 0:

                break;

            default:
                printf("Niepoprawny wybor. Sprobuj ponownie.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}





// #include <iostream>
//
// #define N 10
//
// void fillArray(int arr[], int n) {
//     for (int k = 0; k < n; k++) {
//         printf("Podaj liczbe [%d]: ", k);
//         scanf("%d", &arr[k]);
//     }
// }
//
// void showArray(int arr[], int n) {
//     for (int k = 0; k < n; k++) {
//         printf("numbers[%d] = %d \n", k, arr[k]);
//     }
// }
//
// int getMin(int arr[], int n) {
//     int lowest = arr[0];
//     for (int k = 0; k < n; k++) {
//         if (arr[k] < lowest) {
//             lowest = arr[k];
//         }
//     }
//     return lowest;
// }
//
// int getMax(int arr[], int n) {
//     int highest = arr[0];
//     for (int k = 0; k < n; k++) {
//         if (arr[k] > highest) {
//             highest = arr[k];
//         }
//     }
//     return highest;
// }
//
// float getMean(int arr[], int n) {
//     int total = 0;
//     for (int k = 0; k < n; k++) {
//         total += arr[k];
//     }
//     return (float)total / n;
// }
//
// float getMedian(int arr[], int n) {
//     for (int x = 0; x < n - 1; x++) {
//         for (int y = 0; y < n - x - 1; y++) {
//             if (arr[y] > arr[y + 1]) {
//                 int bufor = arr[y];
//                 arr[y] = arr[y + 1];
//                 arr[y + 1] = bufor;
//             }
//         }
//     }
//
//     float result = (float)(arr[n / 2 - 1] + arr[n / 2]) / 2;
//     return result;
// }
//
// int main() {
//     printf("Tablice \n");
//     int values[N];
//
//     printf("Wprowadz %d liczb do tablicy:\n", N);
//     fillArray(values, N);
//
//     printf("min = %d \n", getMin(values,N));
//     printf("max = %d \n", getMax(values, N));
//     printf("average = %.2f \n", getMean(values, N));
//     printf("median = %.2f\n", getMedian(values, N));
//
//     return 0;
// }