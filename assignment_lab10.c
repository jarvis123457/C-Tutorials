/*  Task 1: Write a program in C to read n number of values in an array and display it in reverse order. */
#include <stdio.h>
int main(){
  int n;
  int a[13]={6,9,8,12,14,16,84,12,54,215,546,21,29};
  n=13;
  for(int i=(n-1);i>=0;i--){
    printf("%d\n",a[i]);
  }
  return 0;
}
/*----------------------------------------------------------*/
/*  Task 2: Write a program in C to copy the elements of one array into another array. */
#include <stdio.h>
int main(){
  int n;
  int a[13]={6,9,8,12,14,16,84,12,54,215,546,21,29};
  n=13;
  int b[13];
  for(int i=0;i<n;i++){
    b[i]=a[i];
    printf("%d\n",b[i])/* To show the elements are copied correctly */;
  }
  return 0;
}
/*----------------------------------------------------------*/
/* Task 3: Write a program in C to count a total number of duplicate elements in an array. */
#include <stdio.h>
int main(){
  int n;
  int a;
  int count;
  int duplicates = 0;
  int TotalDuplicates = 0;
  printf("Enter the Number of elements you want to store.\n");
  scanf("%d",&n);
  int a1[n];
  for(int i=0;i<n;i++){
    printf("Enter the value of Element %d: \n",i+1);
    scanf("%d",&a);
    a1[i] = a;
  }
  int a2[n];
  for(int i=0;i<n;i++){
    a2[i] = a1[i];
  }
  for(int i=0;i<n;i++){
    count = 0;
    for(int j=i;j<n;j++){
      if(a1[i]==a2[j]){
        count += 1;
      }
    }
    for(int k=i;k>=0;k--){
      if(a1[i]==a2[k-1]){
        count = 0;
        }
      }
    duplicates = count - 1;
    if(duplicates>0){
      printf("The Duplicates of Element %d whose value is %d are: %d\n",i+1,a1[i],duplicates);
      TotalDuplicates += duplicates;
    }
  }
  printf("Total Number of Duplicates is : %d\n", TotalDuplicates);

  return 0;
}
