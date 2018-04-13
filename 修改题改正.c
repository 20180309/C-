#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x:");
	scanf("%d",&x);
    if(x<0)
    {
    	y=-1;
		printf("x=%d,y=%d\n",x,y);
    }
    else if(x=0)
    {
    	y=0;
    	printf("x=%d,y=%d\n",x,y);
    }
	else
	{
	    y=1;
	    printf("x=%d,y=%d\n",x,y);	
	}
      return 0;
} 