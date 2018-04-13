#include<stdio.h> 
#include<math.h>
int main()
{
	float grade;
	printf("请输入成绩小于100的分数grade:");
	scanf("%f",&grade);
	if(grade>100)
	{printf("输入错误，请输入小于100的成绩grade:\n");
	}
	else if(grade>=90)
	{
		printf("A\n");
	}
	else if(grade>=80)
	{
		printf("B\n");
	}
	else if(grade>=70)
	{
		printf("C\n");
	}
	else if(grade>=60)
	{
		printf("D\n");
	}
	else 
	{
		
		printf("E\n");
	}
	return 0;
}