/* triangle.h */
#include <stdio.h>

area_triangle(int base, int height) {
    int area;
    area = (base * height)/2;

    return area;
}

int main() {

    int b, h, a;
    printf("Base: ");
    fflush(stdout); //flushes the buffer to print out eveyrthing right awasy when not using endline 
    scanf("%d", &b);
    printf("Height: ");
    fflush(stdout);
    scanf("%d", &h);

    a = area_triangle(b, h); //calling the fucntion 

    printf("The area is %d\n", a);

    return 0;

}