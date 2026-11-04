#include<stdio.h>
int main()
{
int a,b,choice,res;
printf("====BRANCHING STATEMENTS====\n");
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("\n----MENU----\n");
printf("1.Check Positive,Negative or Zero\n");
printf("2.Check Even or Odd\n");
printf("3.Find Largest of Two Numbers\n");
printf("4.Check Divisibility by 5\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
printf("\n----RESULT----\n");
switch(choice)
{
case1:
if(a>0)
printf("%d is Positive",a);
else if(a<0)
printf("%d is Negative",a);
else
printf("%d is Zero",a);
break;
case 2:
if(a%2 == 0)
printf("%d is Even",a);
else
printf("%d is Odd",a);
break;
case 3:
if(a>b)
{
res = a;
printf("%d is the largest number",res);
}
else if(b>a)
{
res = b;
printf("%d is the largest number",res);
}
else
{
printf("both numbers are equal");
}
break;
case 4:
if(a%5==0)
printf("%d is Divisible by 5",a);
else
printf("%d is not divisible by 5",a);
break;
default:
printf("Invaild choice.");
}
return 0;
}
