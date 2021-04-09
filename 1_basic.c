#include <stdio.h>
int main() {
   int a, b;
   printf("Enter a number\n");
   scanf("%d", &a);
   printf("Enter a number\n");
   scanf("%d", &b);
   if(a%2==0){
       printf("%d is even\n", a);
   }
   else{
       printf("%d is odd\n", a);
   }// else block is optional not necessary to run the code
   return 0;
}
