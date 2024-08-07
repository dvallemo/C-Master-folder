/* random.c */
#include <stdio.h>
#include <stdlib.h> //needed for rand function
//man 3 rand on command line to look it up

int my_random_number() {
    int x; 
    x = rand();
    return x;
}

int main() {
    int random;
    random = my_random_number();
    printf("%d\n", random);

}