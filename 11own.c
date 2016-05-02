#include<string.h>
#include<stdio.h>

int main()
{
char stmt[50],a,b;
int len,counter=0;
int z=101,x=102,c=103;

printf("\n format of if statement..\n example...\n if(a<b) then (s=a); \n if(a<b) then (s=a) else (s=b); ");
printf("\n enter the statement ");
gets(stmt);
len = strlen(stmt);
while(stmt[counter]!='(')
counter++;
a=stmt[counter+1];
b=stmt[counter+3];
if(len>22)
{
printf("\n parsing the input statement ..\n");
printf("if(%c<%c) goto 101 \n goto 102 \n 101:(s=%c) \n goto 103 \n 102:(s=%c) \n 103",a,b,a,b);
}
else
{
printf("\n parsing the input statement ..\n");
printf("if(%c<%c) goto 101 \n goto 102 \n 101:(s=%c) \n 102",a,b,a);
}

}



