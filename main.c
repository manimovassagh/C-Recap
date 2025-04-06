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
    nameRef[0] = 'S';
    nameRef[1] = 'a';
    nameRef[2] = 'h';
    nameRef[3] = 'a';
    nameRef[4] = 'r';
    nameRef[5] = '\0';
    printf("Updated name: %s\n", name);
}
