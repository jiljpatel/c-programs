#include<stdio.h>
int sum(int);

int main()
{
	int n,i,sum;
	printf("input :",n);
		scanf("%d",&n);
 while(n>0)
 { i=n%10;
 sum=sum+i;
 n=n/10;}
 
  printf("sum of digits : %d ",sum);
   return 0;
}
