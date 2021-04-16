/* This is going to be fun!
We will write a program that generates a random number and asks the player to guess it. If the player's number is higher than the given number, the program displays "Lower number please". Similary if the player's number is too low the program displays "Higher number please". When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number.
Hint : Use loops
       Use random number generator.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int number;
  int score;
  srand(time(0));
  number = rand()%100+1;// Generates random number between 1 and 100
  score=200;
  printf("You have to guess the number which is between 1 to 100\n");
  printf("Your maximum points are 200 and you will be penalised 5 points for every wrong answer\n");
  int guess;
  do{
    printf("Enter your guess\n");
    scanf("%d",&guess);
    if(guess>number){
      printf("Lower number please\n");
      printf("Guess again\n");
      score-=5;
    }
    else if(guess<number){
      printf("Higher number please\n");
      printf("Guess again\n");
      score-=5;
    }
    else{
      printf("You have guessed correct\n");
    }


  }while(guess!=number);
  printf("Your score is %d\n", score);
  if(score==200){
    printf("You are one in a billion person whose brain works just like a computer\n");
  }
  else if(score<200 && score>150){
    printf("Your ability to follow clues is exceptional. You'll make one helluva Batman\n");
  }
  else if(score<150 && score>100){
    printf("From my point of view this is an average score\n");
  }
  else if(score<100 &&  score>0){
    printf("You need work on your logical skills\n");
  }
  else if(score<=0){
    printf("Show yourself your own middlefinger\n");
  }

  return 0;
}
