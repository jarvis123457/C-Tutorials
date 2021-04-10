#include <stdio.h>
int main() {
    /* Loops are used to repeat similar part of a code snippet efficiently. There are three loops: While Loop; do-while loop; for loop. Choice of loop depends on which one you find easier working on.
    */
  /* While Loop */
    int a;
    printf("Enter value of a\n");
    scanf("%d", &a);
    while(a<10){
        printf("%d\n", a);
        a++;
    }
    
    return 0;
}
---------------------------------------------------------------------------------------
/* Quiz quiz => Write a program to print natural numbers from 10 to 20 when intial loop counter i is initialized to 0. */
#include <stdio.h>
int main() {
    int i;
    printf("Enter value of i\n");
    scanf("%d", &i);
    while(i<10){
        i++;
    }
    while(i>=10 && i<=20){
        printf("%d\n", i);
        i++;
    }
    return 0;
}
/* Loop counter can be int as well as any other number. 

------------------------------------------------------------------------------------------
/* DO-WHILE Loop 
Syntax 
do{
   code;
   code;
    }while(condition;*/
#include <stdio.h>
int main() {
    int i=0;
    
    do{
        printf("The value of i is %d\n", i);
        i++;
    }while(i<10);
    return 0;
    /* Difference b/w while loop and do-while loop
    while => checks the condition and then executes the code
    do-while => executes the code and then checks the condition 
    Typical uses of do-while is that if you want to play a game and after playing it asks do you want to play(yes/no) so if you say no then game does not play again and as long as you say yes it plays. So it always runs the first time.*/
}
--------------------------------------------------------------------------------------------------------------------------
/* Write a program to print first n natural numbers using do-while loop*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of first natural numbers to be printed\n");
    scanf("%d", &n);
    
    do{
        printf("The value of n is %d\n", n);
        n--;
    }while(n>0);
    return 0;
}
------------------------------------------------------------------------------------------------------------------
/* FOR loop
Syntax:
for(initialize; test; increment or decrement){
    code;
    code;
    code;
    }*/
#include <stdio.h>
int main() {
    for(int a=0; a<10;a++){
        printf("The value of a is %d\n", a);
    }
    return 0;
}
-----------------------------------------------------------------------------------------------------
/* Quick Quiz => Write a program to print first n natural numbers using for loop */
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of natural numbers you want\n");
    scanf("%d", &n);
    for(int a=0; a<n;a++){
        printf("The value of a is %d\n", a);
    }
    return 0;
}
-------------------------------------------------------------------------------------------------------
/* Decrementing FOR loop */
#include <stdio.h>
int main() {
    int i;
    for(int i=5; i;i--){
        printf("The value of i is %d\n", i);
    }
    // When value of i becomes 0 the condition returns false hence for loop stops.
    return 0;
}
-------------------------------------------------------------------------------------------------------
/* Quick quiz => Write a program to print n natural numbers in reverse order.  */
#include <stdio.h>
int main() {
    int i;
    printf("Enter the number of natural number you want in reverse order\n");
    scanf("%d", &i);
    for(i; i;i--){
        printf("The value of i is %d\n", i);
    }
    // When value of i becomes 0 the condition returns false hence for loop stops.
    return 0;
}
