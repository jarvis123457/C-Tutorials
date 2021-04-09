/* Type of Instruction:
Type Declaration Instruction:- int a, float b, declaring type of variables.
Arithmetic Instruction:- Arithmetic operations
Control Instruction:- for loops, while loops, decides which instruction runs first and order of program.*/
#include <stdio.h>
int main(){
    int a = 4, b, c; // Type declaration instruction
    printf("The value of a is %d\n", a); // \n is an escape sequence character.
    return 0;
    
}
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ARITHMETIC OPERATORS
#include <stdio.h>
int main(){
    int a = 4;
    int b = 8;
    int z; 
    z= b*a;/* This is a legal assignment of value to z. But
    b*a=z is illegal because 4*8=32=z because this assigns 32 a value of z.*/
    printf("The value of z is: %d\n", z);
    printf("The value of a+b is: %d\n", a+b);/* a and b are OPERANDS and + - * / are ARITHMETIC OPERATORS */
    printf("The value of a-b is: %d\n", a-b);
    printf("The value of a*b is: %d\n", a*b);
    printf("The value of a/b is: %d\n", a/b);
    /* % is a modular division operator, returns the remainder, but cannot be applied on FLOAT, sign same as numerator. */
    printf("5 when divided by 3 leaves a remainder of %d\n", -5%3);
    printf("5 when divided by 3 leaves a remainder of %d\n", 5%-3);
    return 0;
    /* No operator to perform exponentiation in C. We need to
    include a math library to do that. and use pow(a,b) which
    returns a double hence always use %f for pow function. 
    TYPE CONVERSION
    int and int variables give int answer regardless of mathematical operation.
    int and float variables give float answer regardless of mathematical operation.
    float and float variables give float answer regardless of mathematical operation.*/
    
}
--------------------------------------------------------------------------------------------------------------------------------------------------
    // Control Instructions
/* Determines flow of control in aprogram.
    1. Sequence Control Instruction
    Sequence control instruction ensures that the instructions are executed in the same order in which they appear in the program
    2. Decision Control Instruction
    3. Loop Control Instruction
    4. Case Control Instruction*/ 
