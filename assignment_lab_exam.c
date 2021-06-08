#include <stdio.h>
#include <math.h>
int DecimaltoBinary(int n, int a);
int BinarytoDecimal(int d, int a);
int BinaryCheck(int n);
int main() {
    int n;
    int d;
    int a = 0;
    int b;
    int press;
    printf("Press \n 1 To Convert Decimal to Binary \n\n 2 To Convert Binary to Decimal \n");
    scanf_s("%d", &press);
    if (press == 1) {
        printf("Enter the value of decimal number: \n");
        scanf_s("%d", &n);
        if (n == 0) {
            b = 0;
            printf("The binary value of decimal number %d is: %d\n", n, b);
        }
        else if (n < 0) {
            printf("Invalid Input. Please Enter a positive number.\n");
        }
        else {
            b = DecimaltoBinary(n, a);
            printf("The binary value of decimal number %d is: %d\n", n, b);
        }
    }
    else if (press == 2) {
        printf("Enter the value of binary number: \n");
        scanf_s("%d", &n);
        if (n == 0) {
            d = 0;
            printf("The decimal value of binary number %d is: %d\n", n, d);
        }
        else if (n < 0) {
            printf("Invalid Input. Please Enter a Positive Vale.\n");
        }
        else {
            if (BinaryCheck(n) == 1) {
                d = BinarytoDecimal(n, a);
                printf("The decimal value of binary number %d is: %d\n", n, d);
            }
            else if (BinaryCheck(n) == 0) {
                printf("Invalid Input.\n\nEnter a correct Binary Number.\n");
            }
        }
    }
    else {
        printf("Invalid Input. Just Press 1 or 2.\n");
    }
    return 0;
}
int DecimaltoBinary(int n, int a) {
    int d = 0;
    int i;
    for (i = 0; d != 1; i++) {
        d = n / (pow(2, i));
    }
    a = a + pow(10, i - 1);
    if ((n - pow(2, i - 1)) > 0) {
        a = DecimaltoBinary(n - pow(2, i - 1), a);
        return a;
    }
    else {
        return a;
    }
}
int BinarytoDecimal(int d, int a) {
    int n = 0;
    int i;
    for (i = 0; n != 1; i++) {
        n = d / pow(10, i);
    }
    a = a + pow(2, i - 1);
    if ((d - pow(10, i - 1)) > 0) {
        a = BinarytoDecimal((d - pow(10, i - 1)), a);
        return a;
    }
    else {
        return a;
    }
}
int BinaryCheck(int n) {
    int remainder = 0;
    while (n > 0 && (remainder == 0 || remainder == 1)) {
        remainder = n % 10;
        n = n / 10;
    }
    if (remainder == 0 || remainder == 1) {
        return 1;
    }
    else {
        return 0;
    }
}

