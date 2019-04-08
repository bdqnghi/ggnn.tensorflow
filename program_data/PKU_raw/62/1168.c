int main()
{

char str[100];
int i;
gets(str);
for(i=0;i<strlen(str);i++)
if(str[i]!=' ')
printf("%c",str[i]);
else if(str[i]==' ')
{if(str[i-1]!=' ')
printf("%c",str[i]);
}

return 0;
}