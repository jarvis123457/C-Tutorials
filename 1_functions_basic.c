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
/*----------------------------------------------------------*/
/* Quick Quiz => Write a program with three functions.
   1. Guten Morgen function which prints "Good Morning".
   2. Guten Nachmittag function which prints "Good Afternoon".
   3. Gute Nacht function which prints "Good night".*/
#include<stdio.h>
void Guten_Morgen();
void Guten_Nachmittag();
void Gute_Nacht();//Function Prototype
int main(){
  int a;
  printf("Time 7:00 am.\n");
  Guten_Morgen();//Function Call
  printf("Time 12:00 pm.\n");
  Guten_Nachmittag();
  printf("Time 11:00 pm.\n");
  Gute_Nacht();
  return 0;
}
//Function Definition
void Guten_Morgen(){
  printf("Good Morning\n");
}
void Guten_Nachmittag(){
  printf("Good Afternoon\n");
}
void Gute_Nacht(){
  printf("Good Night");
}
