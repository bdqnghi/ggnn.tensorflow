int main()
{
char s[100][100];
char s1[100];
int i,t;
int j=0,p=0;
gets(s1);
for(i=0;i<=strlen(s1);i++)
{
if((s1[i]==' '&&s1[i+1]==' ')||(s1[i]==' '&&s1[i+1]!=' '))
continue;
s[j][p]=s1[i];
p++;
if(s1[i+1]==' '&&s1[i]!=' ')
{j++;
p=0;
}
}
for(t=0;t<=j-1;t++)
{
printf("%s ",s[t]);
}
printf("%s",s[j]);
return 0;
}
