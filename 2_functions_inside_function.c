#include<stdio.h>
void Guten_Morgen();
void Guten_Nachmittag();
void Gute_Nacht();//Function Prototype
int main(){
  int a;
  Guten_Morgen();//Function Call
  return 0;
}
//Function Definition
void Guten_Morgen(){
  printf("Good Morning\n");
  Guten_Nachmittag();
}
void Guten_Nachmittag(){
  printf("Good Afternoon\n");
  Gute_Nacht();
}
void Gute_Nacht(){
  printf("Good Night");
}
