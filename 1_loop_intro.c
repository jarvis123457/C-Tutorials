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
