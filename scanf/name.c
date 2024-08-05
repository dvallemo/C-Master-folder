/* name.c */

#include <stdio.h>

int main() {
    char name[32]; //an array of chars which makes up a string
    
    printf("What is your name\n");
    scanf("%s", &name);  //format string, &name only for scanf
    printf("Hello %s\n", name);

    return 0;
    
}