/* Write a C program to check whether an integer entered by the user is a prime number or not. Using For Loop. */
#include <stdio.h>
int main(){
  int n;
  int i;
  int prime;
  printf("Enter the value of the number you want check is prime or not.\n");
  scanf("%d",&n);
  for(i=2;i<n;i++){
    if(n%i==0){
      prime=0;
      break;
    }
    else{
      prime=1;
    }
  }
  if(prime==1){
      printf("%d is a Prime Number\n", n);
    }
    else{
      printf("%d is not a Prime number\n", n);
    }
  return 0;
}
/*------------------------------------------------------------------*/
/* Task 2: Write a C Program to check whether the number entered by the user is a palindrome or not. Using while Loop. */
/* Let's say abcd is palindrome. At first we need to find d which can be found as a remainder from division by 10. But here the number is in 1000s why I used 10 because we would not know for unknown numbers what 10 to exponent they exist so remainder of 10 will always give d. Since in our reversed number(palindromic conjugate) d is the first digit. So to make the conjugate we will have conjugate= conjugate*10+remainder. In d's case remainder=d so initially our conjugate=0 but after this point it will become d. Now to separate c first we need to cut off d which we do by making abcd an integer and dividing it by 10 since we cannot have decimals so our number becomes abc and we repeat the entire process till we get to a then a/10 becomes zero where condition for our loops becomes false. */ 
#include <stdio.h>
int main(){
  int n, remainder, p_conjugate=0, o_conjugate;/* p_conjugate is the palindromic conjugate while o_conjugate is the original number.*/
  printf("Enter the number to check whether it is a palindrome or not.\n");
  scanf("%d", &n);
  o_conjugate = n;
  while(n)/*when n becomes 0 condition automatically becomes false*/{
    remainder = n%10;
    printf("Separated digit is %d\n", n%10);
    p_conjugate = p_conjugate*10 + remainder;
    n = n/10;
    printf("Remaining body %d\n", n);
  }
  printf("Reversed Number %d\n", p_conjugate);
  if(p_conjugate == o_conjugate){
    printf("%d is a palindrome.\n", o_conjugate);
  }
  else{
    printf("%d is not a palindrome.\n", o_conjugate);
  }
  return 0;
}
/*-------------------------------------------------------------------------------------------------------------*/
#include<stdio.h> 
/* This is a Program which takes input from the user that whether user wants to enter grades of an entire class or not. If no program exits, if yes then user is asked the number of students in class after that the user is asked to enter marks for each student. Then the program calculates average of class and grades that average. Following this, the user is again asked to whether they want to enter marks of any class if no, the program exits by telling overall average of all the classes and if the user types yes, the program takes in input for another class until there is a NO and at end prints average grade of all the classes. */

int main(){ 

int Class = 0, numberOfStudents = 0, marks = 0, sum = 0, avgOfClass = 0, sumOfAvg = 0, avg = 0, count = 0; 
/* The variables are pretty self-explanatory. 'Class' is number of classes for which marks are added. 'numberOfStudents' is number of students in the class. 'marks' is the marks of an individual student. 
'sum' is the sum of the marks of students in one class.
'avgOfClass' is the average of one class.
'sumOfAvg' is the total sum of averages of all classes.
'avg' is the overall average of all the classes.
'count' is the number of times do-while loop runs to input marks for each class it also equals number of classes.  */

char response = 'y', grade = 'o'; 
/* 'response' is used take in the Yes/No input from the used.
  'grade' is used to display Grade output based on the average. */

  do { /* Do-while loop is used to ask for 'response' at least once from the user. It takes in response if it is Yes the loop takes input and calculates of average of each of the classes and if it is No then the condition of loop becomes false and loop ends. */

    if (count == 0){ 

      printf("Is there any class you want to enter grades of(Y/N):"); 

      scanf(" %c", &response); 

    } 

    else{ 

      printf("\nIs there any other class you want to enter grades of(Y/N):"); 

      scanf(" %c", &response); 
      /* This if-else statement seems useless to me because it executes the code below always because both conditions have same code. So instead using only the code below rather than the if-else statements would be efficient.
      printf("\nIs there any other class you want to enter grades of(Y/N):"); 

      scanf(" %c", &response);  */

    } 

    if (response == 'Y' || response == 'y')/* This if statement is a good example that the accompanying else statement is just optional to use. This if statement only executes when the response from user is YES. So this means that the code which takes in input to calculate class average is inside this if statement. */{ 

      printf("Enter number of students in this class:"); 

      scanf("%d", &numberOfStudents);// Takes in the number of Students.

      while (numberOfStudents <= 0)/* This is a while loop which runs until the user enters an acceptable number of students and does not allow the user to move forward unless the user has entered number of students >1. */{ 

        printf("INVALID INPUT. Please enter valid number:"); 

        scanf("%d", &numberOfStudents); 

      } 

      int i = 1; 
      // It would have been better to use i=1 into the for loop to initialize.
      for (i; i <= numberOfStudents; i++){ 
        /* The for loop takes in the marks of all the students. Its counter started from 1 to number of students and when its counter=i, it takes marks of i-th student.*/
        printf("Enter the marks of student no.%d:", i); 

        scanf("%d", &marks); 
        //Similar to above while loop this while loop prevents user from entering marks above 100 or below 0.
        while (marks > 100 || marks < 0){ 

          printf("INVALID INPUT. Please enter valid marks:(1-100):"); 

          scanf("%d", &marks); 

        } 

        sum += marks; 
        //Here marks of all students are summed and when counter=i the marks of i-th student are added to sum.
      } 
      /* Here Average of each class is calculated*/
      avgOfClass = sum / numberOfStudents; 

      //These if-else if-else statements assign a char value to 'grade' based on the value of 'avgOfClass' and prints the grade of class.
      if (avgOfClass >= 70 && avgOfClass<100) { grade = 'A'; } 

      else if (avgOfClass >= 60 && avgOfClass < 100) { grade = 'B'; } 

      else if (avgOfClass >= 50 && avgOfClass < 100) { grade = 'C'; } 

      else if (avgOfClass >= 40 && avgOfClass < 100) { grade = 'D'; } 

      else { grade = 'F'; } 

      printf("Average grade of this class is: %c\n", grade); 

      sumOfAvg += avgOfClass; 

      Class++; 
      /* Now we add average of each class to 'sumOfAvg' and increment 'Class' by 1 so that later we can calculate overall average of class. */

      sum = 0; 

      count++;
      //So far I have not found any useful purpose of 'count' its just same as 'Class' and also its omission will not affect the code. 

      } 

  } while (response == 'Y' || response == 'y');/* If the response was No, the condition of do-while would become false and loop ends and if it was Yes, this condition would return True so loop continues to run.*/ 
  printf("%d", count);

  //Here 'Class' could have been used instead of 'count' and the if-else if statements print that program exits because the response was NO and no input of classes is taken.
  if (count == 0 && (response == 'N' || response == 'n')){ printf("Program is exited.\n"); } 

  else if (count == 0 && (response != 'Y' || response != 'y' || response != 'N' || response != 'n')){ printf("You entered wrong input so program is exited.\n"); } 

  else{ 
    //If the response was Yes at least once, overall average of classes is calculated in this else statement and is then assigned a grade based on the value of 'avg'
    avg = sumOfAvg / Class; 

    if (avg >= 70 && avg < 100) { grade = 'A'; } 

    else if (avg >= 60 && avg < 100) { grade = 'B'; } 

    else if (avg >= 50 && avg < 100) { grade = 'C'; } 

    else if (avg >= 40 && avg < 100) { grade = 'D'; } 

    else { grade = 'F'; } 

    printf("\nThe average grade of these %d classes is %c.\n", Class, grade); 

  } 

return 0; 

} 

