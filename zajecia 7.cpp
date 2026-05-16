#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

int main() {
    int *tab;
    int quantity, upper, lower;

    srand(time(NULL));

    printf("Input the lower range of the array:");
    scanf("%i", &lower);

    printf("Input the upper range of the array:");
    scanf("%i", &upper);

    printf("Input how many numbers you want to generate:");
    scanf("%i", &quantity);

    tab = (int*) malloc(quantity * sizeof(int));

    for (int i = 0; i < quantity; i++) {
        tab[i] = lower + (rand() % (upper - lower + 1));
        printf("array[%i] = %i\n", i, tab[i]);
    }

    free(tab);
    return 0;
}



// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <iostream>
//
// int main() {
//     int *tab;
//     int quantity = 1;
//     int upper, lower;
//
//     while (quantity != 0) {
//         srand(time(NULL));
//
//         printf("Input the lower range of the array:");
//         scanf("%i", &lower);
//
//         printf("Input the upper range of the array:");
//         scanf("%i", &upper);
//
//         printf("Input how many numbers you want to generate:");
//         scanf("%i", &quantity);
//
//         tab = (int *) realloc(NULL, quantity * sizeof(int));
//
//         for (int i = 0; i < quantity; i++) {
//             tab[i] = lower + (rand() % (upper - lower + 1));
//             printf("array[%i] = %i\n", i, tab[i]);
//         }
//     }
//
//     free(tab);
//     return 0;
// }