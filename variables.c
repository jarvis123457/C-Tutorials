#include <stdio.h>

int main() {
    /* %d is used for integers, %f for float or real numbers, and %c for characters. */
    // int a = 8.5; Not Recommended b/c 8.5 is not an integer.
    int a = 4;
    float b = 8.5;
    char c = 'u';
    int d = 45;
    int e = 45 + 4;
    printf("The value of a is %d,\nthe value b is %f,\nand the value of c is %c\n", a, b, c);
    
    printf("Sum of a and d is %d\n", a+d);
    printf("Sum of a and d is %d", e);
    return 0;
}
