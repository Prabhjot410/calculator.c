/*
Summary:Does addition subtraction multiplication divsion
*/

#include<stdio.h>
int main()   {
char operator;
float num1,num2;

printf("Enter operator either + or - or * or divide:");
scanf("%c",&operator);

printf("Enter two operands: ");
scanf("%f%f",&num1,&num2);

switch(operator)  {
case '+':
printf("num1+num2=%.2f",num1+num2);
break;
case'-':
printf("num1-num2=%.2f",num1-num2);
break;
case'*':
printf("num1*num2=%.2f",num1*num2);
break;
case'/':
printf("num2/num1=%.2f",num1/num2);
break;
default:
/*If operators is other than +,-,* or /,
error is shown*/

  printf("Error!operator is not correct");
  break;
}
return 0;
}
/*
Input:Enter operators eithe + or - or * or 
devide:/
Enter two operands:13,456
4.56
*/
