#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you,char comp);
int main(){
  int number;
  char you,comp;
  srand(time(0));
  number=rand()%3+1;
  if(number==1){
    comp='s';
    }
  else if(number==2){
    comp='g';
  }
  else if(number==3){
    comp='w';
  }
  printf("Enter \n 's' => for snake\n 'w' => for water\n 'g' => for gun \n");
  scanf("%c",&you);
  int result = snakeWaterGun(you,comp);
  printf("You chose : %c\n and Comp chose : %c\n",you,comp);
  if(result==0){
    printf("Game Draw\n");
  }
  else if(result==1){
    printf("You win\n");
  }
  else{
    printf("You Lose\n");
  }
  return 0;
}
int snakeWaterGun(char you,char comp){
  if(you==comp){
    return 0;
  }
  else if(you=='s'&&comp=='w'){
    return 1;
  }
  else if(you=='w'&&comp=='s'){
    return -1;
  }
  else if(you=='s'&&comp=='g'){
    return -1;
  }
  else if(you=='g'&&comp=='s'){
    return 1;
  }
  else if(you=='w'&&comp=='g'){
    return 1;
  }
  else {
    return -1;
  }
}
