#include<stdio.h>
int isprime(int,int);
int main()
{ int i,j;
printf("Enter a number");
scanf("%d",&i);

if(i==0 || i==1)
{printf("%d is not prime number ");
}
else
{ j=isprime(i,i/2);
          if(j==1)
         { printf("\n %d is prime number :",i);
         }
        else
        {printf("\n%d is not prime number",i);
		}
}
return 0;
}

int isprime(int i,int a)
{ int j;
   if(i=1)
{
return 1;}
else
{if(i%j==0)
return 0;
else
isprime(i,j-1);
}
}
