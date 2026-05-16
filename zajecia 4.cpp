#include <iostream>

void toLower(char *text){
    while(*text){
        if(*text>='A'&& *text<='Z'){
            *text -=('A'-'a');
        }
        text++;
    }
}
void toUpper(char *text){
    while(*text){
        if(*text>='a'&&*text<='z'){
            *text -=('a'-'A');
        }
        text++;
    }
}

int textSize(char *text){
    int size = 0;
    while(*text){
        size++;
        text++;

    }
    return size;
}

int main(){
    char text[] = "Ala ma kota.";
    printf("%s \n",text);
    toLower(text);
    printf("%s \n",text);
    toUpper(text);
    printf("%s \n",text);
    printf("%d \n",textSize(text));

    return 0;
}









//
// #include <iostream>
// #include <cstdio>
//
//
// int getLength(char *str) {
//     int count = 0;
//     while(*str) {
//         count++;
//         str++;
//     }
//     return count;
// }
//
//
// void makeUpper(char *str) {
//     while(*str) {
//         if(*str >= 'a' && *str <= 'z') {
//             *str -= ('a' - 'A');
//         }
//         str++;
//     }
// }
//
//
// void stripNewLine(char *str) {
//     for(int j = 0; j < 80; j++) {
//         if (str[j] == '\n') {
//             str[j] = '\0';
//             break;
//         }
//     }
// }
//
//
// void makeLower(char *str) {
//     for(int i = 0; str[i] != '\0'; i++) {
//         if(str[i] >= 'A' && str[i] <= 'Z') {
//             str[i] -= ('A' - 'a');
//         }
//     }
// }
//
// int main() {
//     char buffer[80];
//
//     while(1) {
//         printf("Enter new text:\n");
//         fgets(buffer, 80, stdin);
//         stripNewLine(buffer);
//
//         if(buffer[0] == '\0') {
//             break;
//         }
//
//         printf("%s\n", buffer);
//         makeLower(buffer);
//         printf("%s\n", buffer);
//         makeUpper(buffer);
//         printf("%s\n", buffer);
//         printf("%d\n", getLength(buffer));
//     }
//
//     return 0;
// }












// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
//
// char get_random_lowercase() {
//     return 'a' + (rand() % 26);
// }
//
// char get_random_uppercase() {
//     return 'A' + (rand() % 26);
// }
//
// char get_random_digit() {
//     return '0' + (rand() % 10);
// }
//
// char get_random_special() {
//
//     return 33 + (rand() % 15);
// }
//
// int main() {
//     int num_lower = 0, num_upper = 0, num_digits = 0, num_specials = 0;
//
//     srand(time(NULL));
//
//     printf("Podaj liczbe malych liter w hasle: ");
//     if (scanf("%d", &num_lower) != 1) num_lower = 0;
//
//     printf("Podaj liczbe duzych liter w hasle: ");
//     if (scanf("%d", &num_upper) != 1) num_upper = 0;
//
//     printf("Podaj liczbe cyfr w hasle: ");
//     if (scanf("%d", &num_digits) != 1) num_digits = 0;
//
//     printf("Podaj liczbe znakow specjalnych w hasle: ");
//     if (scanf("%d", &num_specials) != 1) num_specials = 0;
//
//     int total_len = num_lower + num_upper + num_digits + num_specials;
//
//     if (total_len <= 0) {
//         printf("Blad: Haslo musi skladac sie z przynajmniej jednego znaku!\n");
//         return 1;
//     }
//
//     char *password = (char *)malloc((total_len + 1) * sizeof(char));
//     if (password == NULL) {
//         printf("Blad: Nie udalo sie zaalokowac pamieci!\n");
//         return 1;
//     }
//
//     int index = 0;
//
//     for (int i = 0; i < num_lower; i++) {
//         password[index++] = get_random_lowercase();
//     }
//     for (int i = 0; i < num_upper; i++) {
//         password[index++] = get_random_uppercase();
//     }
//     for (int i = 0; i < num_digits; i++) {
//         password[index++] = get_random_digit();
//     }
//     for (int i = 0; i < num_specials; i++) {
//         password[index++] = get_random_special();
//     }
//
//     password[total_len] = '\0';
//
//
//     for (int i = total_len - 1; i > 0; i--) {
//         int j = rand() % (i + 1);
//         char temp = password[i];
//         password[i] = password[j];
//         password[j] = temp;
//     }
//
//     printf("\nWygenerowane haslo: %s\n", password);
//
//     free(password);
//
//     return 0;
// }