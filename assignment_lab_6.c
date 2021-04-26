/* Task 1: Display numbers in the following format.
*
* *
* * *
* * * *
* * * * *                    */
#include<stdio.h>
int main(){
  for(int i=0;i<5;i++){
    for(int a=0;a<i+1;a++){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
/*----------------------------------------------------------------------------------*/
/* Task 2: Display numbers in the following format.
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5                    */
#include<stdio.h>
int main(){
  for(int i=5;i;i--){
    for(int a=i;a;a--){
      printf("%d ",a);
    }
    printf("\n");
  }
  return 0;
}
/*-----------------------------------------------------------------------------------*/
/* Task 3: Write a program in C that prints multiplications table, from 1 to 12. */
#include<stdio.h>
int main(){
  for(int i=1;i<=12;i++){
    for(int a=1;a<=20;a++){
      printf("%d ",i*a);
    }
    printf("\n");
  }
  return 0;
}
