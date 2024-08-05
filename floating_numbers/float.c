/* float.c */
#include <stdio.h>

int main() {
    float pi , r, answer;
    pi = 3.14;

    printf("What is the R in cm?\n");
    scanf("%f", &r);
    answer = pi * r * r;

    printf("The area is %f\n", answer);

    return 0;

    /*
        %s - (text) string
        %d - decimal number
        %f - floating point number

    */
}