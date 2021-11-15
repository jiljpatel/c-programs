#include<stdio.h>
Int main()
{  int choice;
 Printf("food menu\n. Italian pizza\n1.sandwich\n2 .burger\n3.pasta\n4 .French fries\n5.");
Scanf("%d",&choice);

Switch(choice)
{ case 1:printf("u have selected Italian pizza");
         printf("u have to pay ₹200");
  break;
 case 2: printf("u have selected sandwich");
         printf("u have to pay ₹50");
  break;
Case 3:printf("u have selected burger");
         printf("u have to pay ₹60");
  break;
case 4:printf("u have selected pasta");
         printf("u have to pay ₹120");
  break;
case 5:printf("u have selected Frenchfries");
         printf("u have to pay ₹75");
  break;
default :("This item is present in menu");
}
}
