#include<stdio.h> 
 int main() 
 { 
   int a[6] = {1,3,6,7,9};
   int i,j,x,t; 
   printf("insert data:");  
   scanf("%d",&x);  
   for(i=0;i<5;i++) 
     if(x<a[i])  
     break;   
   for(j=5;j>i;j--) 
      a[j]=a[j-1];
        a[j]=x;     
   printf("Now array a:\n"); 
       for(i=0;i<6;i++)  
      printf("%4d",a[i]);  
      printf("\n");     
   return 0;
  }