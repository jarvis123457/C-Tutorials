#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int Toss();
int main(){ 
  int wickets;
  int BattingOrBowling;
  printf("Enter number of wickets you want to play for: \n");
  scanf("%d",&wickets);
  BattingOrBowling= Toss();
  printf("%d\n",BattingOrBowling);
  if(BattingOrBowling==0){
    int number;
    srand(time(0));
    number = rand()%2+1;
    printf("%d\n",number);
    if(number==1){
      printf("Shambhu Has Elected To Bat First\n");
    }
    else if(number==2){
      printf("Shambhu Has Elected To Bowl First\n");
    }
  }
  else if(BattingOrBowling==1){
    printf("You Have Elected To Bat First\n");
  }
  else if(BattingOrBowling==2){
    printf("You Have Elected To Bowl First\n");
  }
  else if(BattingOrBowling>=3 || BattingOrBowling<0){
    printf("Invalid Input\n");
    printf("If You Want to Play The Game. Please Run The Program Again\n");
  }
  
  return 0;
}
int Toss(){
  
  int number;
  int BattingOrBowling;
  int toss;
  int toss1;
  srand(time(0));
  number = rand()%5+1;
  printf("%d\n",number);
  printf("TOSS\n");
  printf("Press: \n 1 For Heads\n 2 For Tails\n");
  scanf("%d", &toss);
  if(toss==1){
    printf("Enter a number from 1 to 5\n");
    scanf("%d",&toss1);
    if(toss1>=1 && toss1<=5){
      int a = toss1+number;
      if((a%2)==0){
        printf("You Have Lost The Toss\n");
        BattingOrBowling=0;
      }
      else{
        printf("You Have Won The Toss\n");
        printf("Press: \n 1 For Batting \n 2 For Bowling\n");
        scanf("%d", &BattingOrBowling);
        if(BattingOrBowling==0){
          BattingOrBowling=3;
        }
      }
    }
    else{
      BattingOrBowling=3;
    }
  }
  else if(toss==2){
    printf("Enter a number from 1 to 5\n");
    scanf("%d",&toss1);
    if(toss1>=1 && toss1<=5){
      int a = toss1+number;
      if((a%2)==1){
        printf("You Have Lost The Toss\n");
        BattingOrBowling=0;
      }
      else{
        printf("You Have Won The Toss\n");
        printf("Press: \n 1 For Batting \n 2 For Bowling\n");
        scanf("%d", &BattingOrBowling);
        if(BattingOrBowling==0){
          BattingOrBowling=3;
        }
      }
    }
    else{
      BattingOrBowling=3;
    }
  }
  else{
    BattingOrBowling=3;
  }
  return BattingOrBowling;
}
