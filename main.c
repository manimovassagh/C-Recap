#include <stdio.h>
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
    nameRef[2] = 'o';
    printf("Updated name: %s\n", name);
}
