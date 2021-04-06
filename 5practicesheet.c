/* Q1. Write a C program to calculate area of a rectangle. ]
(a) Using hardcoded inputs
(b) using inputs supplied by the user*/
#include <stdio.h>
int main(){
    int a, b;
    a = 4;
    b = 6;
    printf("Rectangle has two sides where a = %d and b = %d\n", a, b);
    printf("Area of rectangle with sides a and b is %d\n", a*b);
/* For part b */
    int c,d;
    printf("Rectangle has sides c and d\n");
    printf("Enter magnitude of side c\n");
    scanf("%d", &c);
    printf("Enter magnitude of side d\n");
    scanf("%d", &d);
    printf("The area of your rectangle is %d", c*d);
    return 0;
}
/* Q2. Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.*/
#include <stdio.h>
int main(){
//     int r;
//     float p;
//     r = 3;
//     p = 3.142;
//     printf("The circle has radius r = %d and the value of pi is %f\n", r, p);
//     printf("Area of the circle is %f\n", p*r*r);
/* Modifying the same program */
    int r;
    float p;
    int h;
    r = 3;
    p = 3.142;
    h = 3;
    printf("The circle has radius r = %d and the value of pi is %f\n", r, p);
    printf("Area of the circle is %f\n", p*r*r);
    printf("The cylinder has radius r = %d, height h = %d and the value of pi is %f\n", r, h, p);
    printf("Volume of cylinder  is %f\n", p*r*r*h);
    return 0;
}
/* Q3. Write a program to convert Celsius to Fahrenheit.*/
#include <stdio.h>
int main(){
    float celsius;
    celsius = 3;
    float far;
    far = (celsius*9/5)+32;
    printf("%f degree celsius converted to Fahrenheit is %f", celsius, far);
    return 0;
}
/* Q4. Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.*/
#include <stdio.h>
int main(){
    float principal;
    float rate;
    float time;
    printf("Enter the principal amount\n");
    scanf("%f", &principal);
    printf("Enter the rate of interest\n");
    scanf("%f", &rate);
    printf("Enter the time in years\n");
    scanf("%f", &time);
    printf("Your simple interest over %f years is %f\n", time, principal*time*rate/100);
    return 0;
}
