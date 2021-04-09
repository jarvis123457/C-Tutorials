/* Which of the following is invalid in C?
    (i) int a; b=a;
    (ii) int v = 3^3;
    (iii) char dt = '21 Dec 2020'*/
#include <stdio.h>

int main() {
    int a; b=a;// invalid code since b not declared
    return 0;
}
#include <stdio.h>

int main() {
    int v = 3^3; // This is valid. ^ is bitwise xor operator but does not return 27 since 3 to power 3 is 27
    return 0;
}
#include <stdio.h>

int main() {
    char dt = '21 Dec 2020'; // This is invalid since char takes only one character.
    return 0;
}
-------------------------------------------------------------------------------------------------------------------
/* What data type will 3.0/8-2 return?*/
#include <stdio.h>

int main() {
    printf("The value of 3.0/8-2 is %f\n", 3.0/8-3);// This a DOUBLE because most of the compilers treat decimal numbers as double by default. Although books give it as float because they introduce the concept of variables with int and double.
    return 0;
}
-------------------------------------------------------------------------------------------------------------------
  /* Write a program to check whether a number is divisible by 97 or not. */
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns: %d", num%97);
    return 0;
}
-------------------------------------------------------------------------------------------------------------------
  /* Explain step by step evaluation of 3*x/y-z+k where x=2 y=3 z=3 and k=1. */
#include <stdio.h>

int main() {
   int x = 2, y=3, z=3, k=1;
   int result = 3*x/y-z+k;
   // (3*2)/3-3+1 = 6/3-3+1 = 2-3+1 = (2-3)+1 = 0
   printf("The value of 3x/y-z+k is :  %d", result);
    return 0;
}
------------------------------------------------------------------------------------------------------------------
  /* 3.0+1 will be:
   (a) Integer
   (b) Floating Point Integer
   (c) Character 
   Answer: (b)*/
