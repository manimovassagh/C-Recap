#include "sum_module.h"

int sum_numbers(int *numbers, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return sum;
}
