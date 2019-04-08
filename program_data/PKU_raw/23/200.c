int main()
{
int i=0,j=0,k=0,a[101]={0},b[101]={0},l;
char s[101],str[101][101]={'\0'};
gets(s);
l=strlen(s);
while(i<=l)
{
    if(s[i]!=' '&&s[i]!='\0')
{
   str[k][j]=s[i];
   j++;
   i++;
}
else
if(s[i]==' ')
{
       str[k][j]='\0';
       j=0;
       while(i<l&&s[i]==' ')
   {
b[k]++;
i++;
   }
        k++;
}
else
{
str[k][j]='\0';
i++;
k++;
}
}
for(i=k-1;i>=0;i--)
{
   for(j=1;j<=b[i];j++)
   printf(" ");
   printf("%s",str[i]);
}
return 0;
}
