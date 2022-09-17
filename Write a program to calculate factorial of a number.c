#include<stdio.h>
int main()
{
	int f=1,num,n;
	printf("Enter the number for factorial:");
	scanf("%d",&num);
	
	while(num>0)
	{
		f=num*f;
		num--;
	}
	printf("%d is the factorial",f);
}