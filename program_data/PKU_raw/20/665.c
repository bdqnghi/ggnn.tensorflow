void main()
{int i,j,n,max;
char str[15],substr[4];
while (scanf("%s%s",str,substr)!=EOF)
{n=strlen(str);
max=0;
for(i=1;str[i]!='\0';i++)
if(str[i]>str[max]) max=i;
for(i=n-1;i>max;i--)
str[i+3]=str[i];
for(i=max+1,j=0;i<=max+3,j<3;i++,j++)
str[i]=substr[j];
str[n+3]='\0';
printf("%s\n",str);
}
}