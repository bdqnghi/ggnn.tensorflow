int main()
{char a[100],b[100],d='=';
int i,j,k;
gets(a);gets(b);
j=strlen(a);k=strlen(b);
if(j>k)
j=k;
for(i=0;i<j;i++)
{if(a[i]>='a'&&a[i]<='z')
a[i]=a[i]-'a'+'A';
if(b[i]>='a'&&b[i]<='z')
b[i]=b[i]-'a'+'A';
if(a[i]>b[i])
{d='>';break;}
else if(a[i]<b[i])
{d='<';break;}
}
printf("%c",d);
return 0;
}