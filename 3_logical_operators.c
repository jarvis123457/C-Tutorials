#include <stdio.h>
int main() {
   int age;
   int vipPass;
   vipPass=1;
   printf("Enter your age\n");
   scanf("%d", &age);
   if((age<=70 && age>=18) || !(vipPass==1))/* && (AND logical operator) enables second condition with the first one. Also || (OR logical operator). There is ! (NOT Logical operator) jo such ko jhoot or jhoot ko such banata hai.*/{
       printf("You are above 18 and below 70, you can drive\n");
   }
   else{
       printf("You cannot drive\n");
   }
   if(age==50){
       printf("Half century\n");
   }
   /* && is true when both conditions are true. || is true when either of the conditions is true. ! returns true for false and false for true. Use of logical operators enhance the readability of the program.*/
   return 0;
}
