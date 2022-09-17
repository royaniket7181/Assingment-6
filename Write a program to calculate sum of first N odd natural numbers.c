#include<stdio.h>
int main()
{   int num;
	int an,sn;
	printf("Enter the number of terms:");
	scanf("%d",&num);
	an=1+(num-1)*2;
	sn=num*(1+an)/2;
	printf("%d is the sum of first %d terms.",sn,num);
}