#include<stdio.h>
int main()
{
	int num1,num2,max;
	
	printf("Enter the first number:");
	scanf("%d",&num1);

    printf("Enter the second number:");
	scanf("%d",&num2);	
	
	if(num1>num2)
	{   max=num1;
		while(1)
		{
			if(max%num1==0&&max%num2==0)
			{
			  printf("The LCM of %d and %d is=%d",num1,num2,max);
			  break;
			 }
			 max++;
		}
		}
	
	if(num1<num2)
	{   max=num2;
		while(1)
		{
			if(max%num1==0&&max%num2==0)
			{
			  printf("The LCM of %d and %d is=%d",num1,num2,max);
			  break;
			 }
			 max++;
		}
		}
}