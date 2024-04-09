#define SIZE 40
#define LIM 5
#include <stdio.h>
#include <string.h>

/*
*Завдання 2. Приклад 5.
а) Перевірте роботу програми.
б) Використайте інші функції для введення та виведення рядків і
проаналізуйте отримані результати.
 */

int main() {
    char words[LIM][SIZE];
    int i = 0;
    printf("Input %d words that begins with letter b:\n", LIM);
    while (i < LIM) {
        char temp[SIZE];
        //gets(temp);
        scanf("%s", temp);
        if (temp[0] != 'b') printf("%s dont begins with letter b!\n ", temp);
        else {
            strcpy(words[i], temp);
            i++;
        }
    }
    puts("List of received words:");
    for (i = 0; i < LIM; i++)
        printf("%s\n", words[i]);
        // puts(words[i]);

    return 0;
}
