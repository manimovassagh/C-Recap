#include <fstream>
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


std::wofstream file("output.txt");
    if (file.is_open()) {
        file << "Hello, Mani let us play with C!\n";
        file << "Nice language!\n";
        file << "Referenced name: " << nameRef << "\n";
        file << "Updated name: " << name << "\n";
        file.close();
    } else {
        printf("Unable to open file\n");
    }
    printf("Name: %s\n", name);


    printf("Referenced name: %s\n", nameRef);
    nameRef[0] = 'S';
    nameRef[1] = 'a';
    nameRef[2] = 'h';
    nameRef[3] = 'a';
    nameRef[4] = 'r';
    nameRef[5] = '\0';
    printf("Updated name: %s\n", name);
}
