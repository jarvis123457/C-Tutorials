/* In C mathematical rules like BODMAS do not apply. */
#include <stdio.h>
int main(){
    int x= 4;
    int y= 9;
    printf("The value of 3x-4y is %d\n", 3*x-8*y);/* Here BODMAS doesn't apply rather OPERATOR PRECEDENCE is the rule deciding the priority of operators. 
    Priority    Operators
    1st         *  /  %
    2nd         +   -
    3rd         = (Assignment Operator) 
    Operators of higher priorities execute first in the ABSENCE OF PARENTHESIS.
    */
    printf("The value of 8*y/3*x is %d\n", 8*y/3*x); //Here we check associativity since both operators have same priority. * and / operators follow left to right associativity. For example:-   x*y/x => (x*y)/z ;  x/y*z => (x/y)*z
    return 0;
}
