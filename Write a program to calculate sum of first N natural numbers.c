#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number upto which sum required:");
	scanf("%d",&num);
	num=num*(num+1)/2;
	printf("\nSum of terms is:%d",num);
}