#include<stdio.h>
#include<math.h>
#define X 1000
int main()
{
	int i,k;
	printf("������һ��С��1%d������i:",X);
	scanf("%d",&i);
	if(i>X)
	{
		printf("�����������������������������һ��С��%d����i:",X);
		
		scanf("%d",&i); 
	} 
	k=sqrt(i);
	printf("%d��ƽ���������������ǣ�%d\n",i,k);
return 0;	
} 