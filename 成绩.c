#include<stdio.h> 
#include<math.h>
int main()
{
	float grade;
	printf("������ɼ�С��100�ķ���grade:");
	scanf("%f",&grade);
	if(grade>100)
	{printf("�������������С��100�ĳɼ�grade:\n");
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