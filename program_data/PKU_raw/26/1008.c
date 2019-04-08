int main()
{
char s[101],t[101];
int i,j=1,n;
gets(s);
t[0]=s[0];
for(i=1;s[i]!='\0';i++)
{
if(s[i]==' '&&s[i+1]==' ')
continue;
else

{
t[j]=s[i];j++;
}
}
t[j]='\0';
printf("%s",t);
return 0;
}