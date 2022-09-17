#include<stdio.h>
int main()
{
	int num,count=0;
	printf("Enter the number for count:");
	scanf("%d",&num);
	while(num>0)
	{
		num=num/10;
		count++;
	}
	printf("%d is the number of digits.",count);
}