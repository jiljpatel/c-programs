#include<stdio.h>
int main()
{ 
int a[3][3]={1,2,3},i,j;
printf("Enter the elements :\n ");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{printf("enter the elemnts in pockets[%d][%d]",i,j);
	scanf("%d",&a[i][j]);
	}
}
printf("matrix is  \n");

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{printf("%3d",a[i][j]);
	}
	printf("\n");
}
getch();
}
