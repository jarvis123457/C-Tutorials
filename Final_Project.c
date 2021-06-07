#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int Toss();
int Batting(int score);
int Bowling(int score);
int main(){ 
  int wickets;
  int BattingOrBowling;
  int score=0;
  int compscore=0;
  char ptr[30];
  int a;
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
    printf("Your Batting Has Started.\n");
    for(int i=0;i<wickets;i++){
      a=0;
      printf("Enter the name of your Batsman Not longer than 30 characters. No Spaces in the Name.\n\n");
      scanf("%s",ptr);
      a = Batting(a);
      score += a;
      printf("%s Has Scored %d Runs\n\n",ptr, a);
    }
    printf("Your team has scored %d Runs\n\n",score);
    printf("Shambhu needs to make %d Runs to Win the game.\n",score+1);
    printf("Your Bowling Has Started Now.\n\n");
    for(int i=0;i<wickets || compscore>score;i++){
      a=0;
      printf("Shambhu ka Larka %d is Batting.\n\n",i+1);
      a = Bowling(a);
      printf("Shambhu Ka Larka %d scored %d Runs.\n\n",i+1,a);
      compscore += a;
    }
    if(compscore<score){
      printf("Congratulations!!! You Have Won the Match.\n You Scored %d Runs.\n\n\n",score);
      printf("Shambhu's Team scored %d Runs.\n\n\n",compscore);
    }
    else if(score<compscore){
      printf("Shambhu and Sons Have Taken this Match Out of Your Grasp. You Lose!!!!");
      printf("Shambhu's team Scored %d Runs \n\n\n You Scored %d Runs.\n\n\n",compscore,score);
    }
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
int Batting(int score){
  int number;
  int PlayerNumber;
  srand(time(0));
  number=rand()%6+1;
  printf("The Number is %d\n", number);
  printf("Enter any number from 1 to 6\n");
  scanf("%d",&PlayerNumber);
  if(PlayerNumber<0 || PlayerNumber>6){
    printf("Invalid Input. Play the ball again.\n");
    return Batting(score);
  }
  else if(PlayerNumber==number){
    printf("Your Batsman is OUT.\n");
    return score;
  }
  else{
    score+=PlayerNumber;
    return Batting(score);
  }
}
int Bowling(int score){
  int number;
  int PlayerNumber;
  srand(time(0));
  number=rand()%6+1;
  printf("The Number is %d\n", number);
  printf("Enter any number from 1 to 6\n");
  scanf("%d",&PlayerNumber);
  if(PlayerNumber<0 || PlayerNumber>6){
    printf("Invalid Input. Play the ball again.\n");
    return Bowling(score);
  }
  else if(PlayerNumber==number){
    printf("Shambu's Batsman is OUT.\n");
    return score;
  }
  else{
    score+=PlayerNumber;
    return Bowling(score);
  }
}
