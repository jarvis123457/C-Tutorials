/*#include <stdio.h>
int main(){
    
    return 0;
}
 Just this much code is known as BOILERPLATE CODE. int main returns an integer which returns 0 and 0 means success, this show program has successfully and completely executed.*/
#include <stdio.h>
int main(){
    int a, b;/* int assigns at least 2 and at most 4 bytes size to variables a and b. */
    printf("Enter the value of a\n");
    scanf("%d", &a);/* %d is known as format specifier and & means ADDRESS OF. In this case address of a in memory. Format specifier of a. */
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Sum of a and b is %d\n", a+b);
    return 0;
}
