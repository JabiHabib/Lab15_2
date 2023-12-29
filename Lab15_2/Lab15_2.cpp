#include <stdio.h>
#include <locale>

int main() {
    setlocale(LC_ALL, "Ukr");
    int c[3];

    printf("Введiть три числа: ");
    for (int i = 0; i < 3; i++) {
        scanf_s("%d", &c[i]);
    }

    int min = c[0];

    for (int i = 1; i < 3; i++) {
        if (c[i] < min) {
            min = c[i];
        }
    }

    printf("Найменше число: %d\n", min);

    return 0;
}