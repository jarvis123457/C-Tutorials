#include <stdio.h>
// void printArray(int *ptr, int n);
void printArray(int ptr[], int n);
int main(){
  int arr[]={1,66,333,4444,55555,22};
  printArray(arr,6);
  return 0;
}
// void printArray(int *ptr, int n){
//   for(int i=0;i<n;i++){
//     printf("The value of element %d is %d\n", i+1,*(ptr+i));
//   }
// }
void printArray(int ptr[], int n){
  for(int i=0;i<n;i++){
    printf("The value of element %d is %d\n", i+1,ptr[i]);
  }//This can change the actual array because we are calling by reference
}
