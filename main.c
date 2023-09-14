#include <stdlib.h>
#include <stdio.h>

void guess(int number, int low, int high);

int main(void) {
    int number = 19999;
    printf("%d \n", number);
    guess(number, 1, 10000000);
    return 0;
}

void guess(int number, int low, int high) {
    int mid = (low + high) / 2;

    if (number < mid) {
        printf("Kleiner als %d \n", mid);
        guess(number, low, mid - 1);
    } else if (number > mid) {
        printf("Groesser als %d \n", mid);
        guess(number, mid + 1, high);
    } else {
        printf("Die Zahl ist %d \n", number);
    }
}
