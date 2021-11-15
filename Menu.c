#include<stdio.h>
int main()
{  int choice;
 printf("food menu\n1. Italian pizza\n2.sandwich\n3 .burger\n4 . pasta\n5 .French fries\n6");
 printf("enter your choice :");
scanf("%d",&choice);

switch(choice)
{ case 1:printf("u have selected Italian pizza");
         printf("and have to pay 200\n");
  break;
 case 2: printf("u have selected sandwich");
         printf(" and have to pay 50\n");
  break;
case 3:printf("u have selected burger");
         printf("and have to pay 60\n");
  break;
case 4:printf("u have selected pasta");
         printf("and have to pay 120\n");
  break;
case 5:printf("u have selected Frenchfries");
         printf("and have to pay 75\n");
  break;
default :("This item is present in menu");
}
return 0;
}

