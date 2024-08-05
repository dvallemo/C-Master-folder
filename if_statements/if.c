/* if.c */
#include <stdio.h>

int main() {
    int speed;
    int speed_limit = 65;

    printf("How fast are you driving(mil/hr)?\n");
    scanf("%d", &speed);

    if( speed > speed_limit ) {
        printf("You are going too fast, you are above the speed limit, which is %d\n", speed_limit);
    } else if(speed < speed_limit) {
        printf("You are going below the speed limit, good job! Speed limit is %d\n", speed_limit);
    } else {
        printf("You are right on the speed limit, and the speed limit is %d\n", speed_limit);

    }

    return 0;
}