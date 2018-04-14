#include<stdio.h>
#include<math.h>
int main()
{
	float x,y;
	printf("请输入一个数x:");
	scanf("%f",&x);
	if(x<1)
	{
		y=x;
		printf("y=%f:",y);
	}
	else if(x>=10)
	{
		y=3*x-11;
        printf("y=%f:",y);
	}
	else 
	{
		y=2*x-1;
		printf("y=%f:",y);
	}
	return 0;
} 