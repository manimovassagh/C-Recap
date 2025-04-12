#include <stdio.h>
#include "sum_module.h"

int main(int argc, char const *argv[])
{
/**
 * * @file main.c
 */
    printf("Hello, Mani let us play with C!\n");
    printf("Nice language!\n");
    char name[] = "Mani";
    char *nameRef = name;


    printf("Referenced name: %s\n", nameRef);
    nameRef[0] = 'S';
    nameRef[1] = 'a';
    nameRef[2] = 'h';
    nameRef[3] = 'a';
    nameRef[4] = 'r';
    nameRef[5] = '\0';
    printf("Updated name: %s\n", name);

    int numbers[] = {19999, 122, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int result = sum_numbers(numbers, size);
    printf("Sum of numbers: %d\n", result);

    return 0;
}
