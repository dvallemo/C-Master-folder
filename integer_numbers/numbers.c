/* numbers.c */
#include <stdio.h>

int main() {
    int x, y, answer;
    printf("Select a number\n");
    scanf("%d", &x);
    printf("Select another integer\n");
    scanf("%d", &y);

    answer = x + y;

    printf("The answer is %d\n", answer);


}