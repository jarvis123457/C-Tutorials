/* What will be the output of this program */
#include <stdio.h>
int main() {
    int a = 10;
    if(a=11){
        printf("I am 11");
    }
    else{
        printf("I am not 11");
    }
    /* My answer would be: Output will be I am 11 since a is asigned 11 so if statement has a non-zero argument which returns true hence its printed "I am 11" */
    return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  /* Write a program to find out whether a student is pass or fail; if it requires total 40% and at least 33% in each subject to pass. Assume 3 subjects and take marks as an input from the user. */
#include <stdio.h>
int main() {
    int electromagnetism, calculus, cosmology;
    printf("Enter marks of electromagnetism out of 100\n");
    scanf("%d", &electromagnetism);
    printf("Enter marks of calculus out of 100\n");
    scanf("%d", &calculus);
    printf("Enter marks of cosmology out of 100\n");
    scanf("%d", &cosmology);
    float total = (electromagnetism + calculus + cosmology)/3;
    if(electromagnetism>=33 && calculus>=33 && cosmology>=33 && total>= 40){
        printf("You have passed and your total percentage is %f\n", total);
    }
    else{
        printf("You failed and your total percentage is %f\n", total);
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  /* Calculate income tax paid by an employee to the government as per mentioned below:
    Income Slab     Tax
    2.5L-5.0L       5%
    5.0L-10.0L      20%
    Above 10.0L     30%
    Note that there is no tax below 2.5L. Take income amount as an input from the user.*/
#include <stdio.h>
int main() {
    float tax = 0, income;
    printf("Enter your income\n");
    scanf("%f", &income);
    if(income>=250000 && income<500000){
        tax = (income-250000)*0.05;
    }
    else if(income>=500000 && income<1000000){
        tax = (income-500000)*0.2 + (250000)*0.05;
    }
    else if(income>1000000){
        tax = tax + (income-1000000)*0.3+(500000)*0.2+(250000)*0.05;
    }
    printf("Your net income tax to be paid is %f\n", tax);
    
    return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------------------
/* Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.*/
/* Write a program to determine whether a character entered by the user is lowercase or not. */
#include <stdio.h>
int main() {
    // Use ascii values for this problem 97 to 122 = a to z
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122){
        printf("It is lowercase");
    }
    else{
        printf("It is not lowercase");
    }
    return 0;
}
