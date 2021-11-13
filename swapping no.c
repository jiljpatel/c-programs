#include<stdio.h>
int main()
{ 
int a,b,c;
 printf("Enter the value of a :");
 scanf("%d",&a);
 printf("Enter the value b :");//a=10 b=20
 scanf("%d",&b);
 a=a+b;  //a=30
 b=a-b;   //b=30-20 =10
 a=a-b;  //a=30-10= 20
 printf("a=%d b=%d",a,b); //a=20 b=10
 return 0;
}
