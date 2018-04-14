#include<stdio.h>
#include<math.h>
#define X 1000
int main()
{
	int i,k;
	printf("请输入一个小于1%d的整数i:",X);
	scanf("%d",&i);
	if(i>X)
	{
		printf("输入的数不符合条件，请重新输入一个小于%d的数i:",X);
		
		scanf("%d",&i); 
	} 
	k=sqrt(i);
	printf("%d的平方根的整数部分是：%d\n",i,k);
return 0;	
} 