#include<stdio.h>
int main()
{
	int num,i,flag=1;
	printf("Enter number to be checked:");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
	   {
		   	flag=0;
		break;}
	}
	if(flag==1)
	printf("%d is a prime number.",num);
	else
	printf("%d is a composite number.",num);
}