/* Question 1: Write a program in which a function will take any number as argument and will display its table using loops. (It will only display multiples with odd numbers) */
#include <stdio.h>
void MultiplicationTable(int n, int a);
int main(){
  int n;
  int a;
  printf("Enter the number whose multiplication table you want\n");
  scanf("%d", &n);
  printf("Enter the value of the highest odd multiplier\n");
  scanf("%d", &a);
  MultiplicationTable(n,a);
  return 0;
}
void MultiplicationTable(int n, int a){
  printf("Multiplication Table of %d\n",n);
  for(int i=0;i<a;i++){
    if((i+1)%2!=0){
      printf("%d multiplied by %d is : %d\n",n,i+1,n*(i+1));
    }
  }
}
/*-------------------------------------------------------------------------------------------*/
/* Write a program which will have three functions. One function will take input of employee total salary, no. of leaves and extra sale amount. Next function will receive all information of employee and will deduct 1000 for one leave (no deduction for first two leaves) and add 50% 0f extra sale in final salary of employee. Third function will receive and display total salary of employee.
Salary should be checked whether it is between 30000 and 70000. */
#include <stdio.h>
int EmployeeInfo();
int SalCalculation(int salary,int leaves,int ExtSaleAmnt);
void DisplaySalary(int a);
int main(){
  int a;
  a = EmployeeInfo();
  if(a<=0){
    printf("Please Try Again!! Your Amount of Base Salary is Invalid\n");
  }
  /*--------------------------------------------------------------------------------*/
  /* Using Pointers */
  /* Write a program which will have three functions. One function will take input of employee total salary, no. of leaves and extra sale amount. Next function will receive all information of employee and will deduct 1000 for one leave (no deduction for first two leaves) and add 50% 0f extra sale in final salary of employee. Third function will receive and display total salary of employee.
Salary should be checked whether it is between 30000 and 70000. */
#include <stdio.h>
void EmployeeInfo(int *salary,int *leaves, int *ExtSaleAmnt);
int SalCalculation(int salary,int leaves,int ExtSaleAmnt);
void DisplaySalary(int salary);
int main(){
  int salary=0;
  int leaves=0;
  int ExtSaleAmnt=0;
  EmployeeInfo(&salary, &leaves, &ExtSaleAmnt);
  salary = SalCalculation(salary, leaves, ExtSaleAmnt);
  DisplaySalary(salary);
  return 0;
}
void EmployeeInfo(int *salary, int *leaves, int *ExtSaleAmnt){
  printf("Enter the Amount of Your Base Salary.\n");
  scanf("%d", salary);
  if(*salary>=30000 && *salary<=70000){
    printf("Enter the number of your leaves\n");
    scanf("%d", leaves);
    printf("Enter the Amount Earned in Extra Sales.\n");
    scanf("%d", ExtSaleAmnt);
  }
  else{
    printf("Invalid Amount of Salary.\n");
    printf("Please Enter an Amount between 30000 and 70000\n");
    EmployeeInfo(salary, leaves, ExtSaleAmnt);
  }
}
int SalCalculation(int salary,int leaves,int ExtSaleAmnt){
  if(leaves>2){
    salary -= (leaves-2)*1000;
    }
  salary += 0.5*ExtSaleAmnt;
  return salary;
}
void DisplaySalary(int salary){
  printf("The Amount of Your Final Salary is : %d\n",salary);
}
  else{
    DisplaySalary(a);
  }
  return 0;
}
int EmployeeInfo(){
  int salary;
  int leaves;
  int ExtSaleAmnt;
  int a=0;
  printf("Enter your monthly base salary\n");
  scanf("%d",&salary);
  if(salary>=30000 && salary<=70000){
    printf("Enter the number of your leaves\n");
    scanf("%d",&leaves);
    printf("Enter the amount earned in Extra Sales\n");
    scanf("%d",&ExtSaleAmnt);
    a = SalCalculation(salary, leaves, ExtSaleAmnt);
  }
  else{
    printf("Please Enter an amount between 30000 and 70000\n");
  }
  return a;
}
int SalCalculation(int salary,int leaves,int ExtSaleAmnt){
  if(leaves>2){
    salary -= (leaves-2)*1000;
  }
  salary += 0.5*ExtSaleAmnt;
  return salary; 
}
void DisplaySalary(int a){
  printf("The Amount of Your Final Salary is : %d\n",a);
}
