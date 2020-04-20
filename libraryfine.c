#include<stdio.h>
int main()
{
	int days;
	float fine;
	printf("Enter number of days");
	scanf("%d",&days);
	if(days<=10)
	fine=days*1;
	else if(days<=20)
	fine=10+(days-10)*1.50;
	else
	fine=10+10*1.50+(days-20)*2;
	printf("Fine is %f",fine);
}
