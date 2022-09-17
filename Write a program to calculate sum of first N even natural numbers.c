#include<stdio.h>
int main()
{
	int num,an,sn;
	printf("Enter the number of terms:");
	scanf("%d",&num);
	an=2+(num-1)*2;
	sn=num*(2+an)/2;
	printf("%d is the sum of first %d terms.",sn,num);
}