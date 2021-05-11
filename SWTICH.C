#include<stdio.h>
int main()
{
int choice,a,b,s;

while (1)
{
clrscr();
printf("--------------- Program For Switch Statement --------------\n\n");
printf("1. Addition \n");
printf("2. Odd or Even \n");
printf("3. Print N Natural Number \n");
printf("4. Exit \n\n");
printf("Enter Your Choice : ");
scanf("%d", &choice);

switch (choice)
{
  case 1:
	printf("Enter Two Numbers:\n");
	scanf("%d %d", &a, &b);
	s=a+b;
	printf("Sum is %d",s);
	break;

  case 2:
	printf("Enter a Number : ");
	scanf("%d", &a);
	if (a%2==0)
	  printf("%d is a Even Number", a);
	else
	  printf("%d is a Odd Number", a);
	break;

   case 3:
	printf("Enter a Number : ");
	scanf("%d", &a);
	for(b=1; b<=a; b++)
	{
	  printf(" %d ", b);
	}
	break;

   case 4:
	exit(0);

  default:
	printf("Invalid Choice");
}
getch();
}
return 0;
}