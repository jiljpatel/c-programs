#include<stdio.h>
#include<conio.h>
main()
{ FILE *fp;
char ch;
int i,n;
fp = fopen("abc.txt","r");
if(fp==NULL)
{printf("error in opening of file");

return 0;}
fseek(fp,0,SEEK_END);
n = ftell(fp);
i=0;
while(i<n)
{i++;
fseek(fp,-i,SEEK_END);
ch=fgetc(fp);
printf("%c",ch);}
getch();
}
