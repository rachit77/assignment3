#include<stdio.h>
int main()
{
	int a,b; 
	printf("enter 2 nos");
	scanf("%d%d",&a,&b);

	if(a>b)
	{
		printf("%d%d \n",a,b);
	}
	else
		printf("%d%d \n",b,a);
}
