#include<stdio.h>
struct employee{
 char name[50];
 int age,number,salary;
};
 int main()
  { int i=0; 
 struct employee emp[5];
   
 printf("Name\tage\t number\t  salary\t",emp[i].name,emp[i].age,emp[i].number,emp[i].salary);
 for(i=0;i<5;i++)
{printf("\n");
  scanf("%s\t %d\t %d\t %d\t ",&emp[i].name,&emp[i].age,&emp[i].number,&emp[i].salary);
 
}
 
 return 0;
}
