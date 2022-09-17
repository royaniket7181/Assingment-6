#include<stdio.h>
int main()
{
	int i=1,p,N,sum=0;
	printf("Enter the number of terms:");
	scanf("%d",&N);
	while(i<=N)
	{   
	   p=i*i*i;
		sum=sum+p;
		i++;
	}
	printf("%d is thesum of first %d terms.",sum,N);
	
}