void main()
{
int l=0,m=0,i=0;
char str[20],sub[5];

while (scanf("%s%s",str,sub)!=EOF)
{
l=strlen(str);

for(i=0;str[i]!='\0';i++)
{if (str[i]>str[m]) m=i;}

for(i=l+2;i>=m+4;i--)
{str[i]=str[i-3];}

str[m+1]=sub[0];
str[m+2]=sub[1];
str[m+3]=sub[2];
str[l+3]='\0';

printf("%s\n",str);
}
}
