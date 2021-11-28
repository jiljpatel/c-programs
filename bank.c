#include<stdio.h>
#include<conio.h>
int i,j;
int main_exit;
int menu();
int main()
{ menu(); 
 char pass[10],password[10]="mycap";
int i=0;
printf("\n\tEnter the password :");
	scanf("%s",pass);
	if(pass[i]!=13 && pass[i]!=8)
	{ printf("");
	pass[i]=getch();
	i++;
	}
	if(strcmp(pass,password)==0)
	{printf("\n\n password match");
	
	for(i=0;i<=6;i++)
	{
	printf(".");
	}
	system("cls");
	menu();
}
else{printf("\n\n wrong password");
printf("Enter 1 to retry & 0 to exit");
scanf("%d",&main_exit);
if(main_exit==1)
{system("cls");
main();
}
else if(main_exit=0)
{system("cls");
close();
}
else
{printf("\n invalid");
system("cls");
}
}
return 0;
}
