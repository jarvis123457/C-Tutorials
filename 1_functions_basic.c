#include<stdio.h>
void display();//Function Prototype
int main(){
  int a;
  printf("Initializing display function.\n");
  display();//Function Call
  printf("Display function finished its work.\n");
  return 0;
}
//Function Definition
void display(){
  printf("This is display function.\n");
}
