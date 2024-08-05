/* while.c */
#include <stdio.h>

int main() {

    int x;

    x=0;

    while( x == 0 ) {
        printf("Press 1 to cancel loop\n");
        scanf("%d", &x);
    }

    return 0;
}