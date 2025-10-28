#include <stdio.h>
#include <stdint.h>

uint8_t number[] = {4, 7, 3, 2, 1}; 

uint8_t checkNumber(uint8_t numb) {
    uint8_t i;
    for (i = 0; i < 5; i++) {
        if (numb == number[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {
    uint8_t input[5];
    uint8_t i, correct_position, correct_value;

    printf("5 basamakli sayiyi tahmin edin: ");
    scanf("%1hhu%1hhu%1hhu%1hhu%1hhu", &input[0], &input[1], &input[2], &input[3], &input[4]);

    while (1) {
        correct_position = 0;
        correct_value = 0;

        for (i = 0; i < 5; i++) {
            if (input[i] == number[i]) {
                correct_position++;
            } else if (checkNumber(input[i])) {
                correct_value++;
            }
        }

        printf("Çıktı: ");
        for (i = 0; i < correct_position; i++) {
            printf("o");
        }
        for (i = 0; i < correct_value; i++) {
            printf("+");
        }
        for (i = 0; i < 5 - correct_position - correct_value; i++) {
            printf("x");
        }
        printf("\n");

        if (correct_position == 5) {
            printf("Dogru bildiniz, tebrikler!\n");
            break;
        } else {
            printf("5 basamakli sayiyi tekrar tahmin edin: ");
            scanf("%1hhu%1hhu%1hhu%1hhu%1hhu", &input[0], &input[1], &input[2], &input[3], &input[4]);
        }
    }

    return 0;
}