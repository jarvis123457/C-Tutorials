/* Task 1: Write a C Program that takes input from a user and stores them in an  array. */
#include <stdio.h>
int main(){
  int n;
  int input;
  char char_input;
  float float_input;
  printf("Enter '1' to input an array of integer variables\n");
  printf("Enter '2' to input an array of character variables\n");
  printf("Enter '3' to input an array of floating point variables\n");
  int a;
  scanf("%d", &a);
  if(a==1){
    printf("Enter the number of integer inputs to be stored\n");
    scanf("%d", &n);
    int ar1[n];
    for(int i=0;i<n;i++){
      printf("Enter the value of Element %d\n",i+1);
      scanf("%d",&input);
      ar1[i]=input;
    }
    for(int j=0;j<n;j++){
      printf("Element %d is : %d\n",j+1,ar1[j]);
    }
  }
  if(a==2){
    printf("Enter the number of character elements to be stored\n");
    scanf("%d", &n);
    char ar2[n];
    for(int i=0;i<n;i++){
      printf("Enter the value of Element %d\n",i+1);
      scanf(" %c",&char_input);
      ar2[i]=char_input;
    }
    for(int j=0;j<n;j++){
      printf("Element %d is : %c\n",j+1,ar2[j]);
    }
  }
  if(a==3){
    printf("Enter the number of floating point elements to be stored\n");
    scanf("%d", &n);
    float ar3[n];
    for(int i=0;i<n;i++){
      printf("Enter the value of Element %d\n",i+1);
      scanf("%f",&float_input);
      ar3[i]=float_input;
    }
    for(int j=0;j<n;j++){
      printf("Element %d is : %f\n",j+1,ar3[j]);
    }
  }
  return 0;
}
/*--------------------------------------------------------------------------------------------*/
/* Task 2: Write a C Program to compute average of n numbers. */
#include <stdio.h>
int main(){
  int n;
  float m;
  float sum=0;
  printf("Enter number of numbers whose average you need to calculate\n");
  scanf("%d",&n);
  float avg[n];
  for(int i=0;i<n;i++){
    printf("Enter value of number %d\n",i+1);
    scanf("%f", &m);
    avg[i]=m;
  }
  for(int i=0;i<n;i++){
    sum += avg[i];
  }
  printf("The average of the numbers is %.4f", sum/n);
  return 0;
}
