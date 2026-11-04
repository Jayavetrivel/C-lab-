#include <stdio.h>
int main(){
int a,b,choice,res;
printf("===OPERATORS AND EXPRESSIONS===");
printf("Enter the first no.");
scanf("%d",&a);
printf("Enter the second no.");
scanf("%d",&b);
printf("\n_Menu_\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Modulus\n");
printf("\n Enter your choice;");
scanf("%d",&choice);
switch(choice)
{
case 1:
res=a+b;
printf("Result=%d",res);
break;
case 2:
res=a-b;
printf("result=%d",res);
break;
case 3:
res=a*b;
printf("result=%d",res);
break;
case 4:
if(b!=0)
{
res=a/b;
printf("result=%d",res);
}
case 5:
if(b!=0)
{
res=a%b;
printf("result=%d",res);
break;
}
else{
printf("Modulus by zero is not possible!");
}
break;
default:
printf("invalid choice:");
}
return 0;
}
