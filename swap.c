//Swapping of two numbers
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the value a and b:");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d",a,b);
	return 0;
}
