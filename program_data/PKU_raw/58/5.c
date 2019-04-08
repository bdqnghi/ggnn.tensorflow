int main()
{
int i,j,n,len,flag=0;
char a[50000][82];
char str[100];
//scanf("%d",&n);
gets(str);
n=atoi(str);
for(i=0;i<n;i++)
gets(a[i]);
for(i=0;i<n;i++)
{flag=0;
if(a[i][0]=='_'||(a[i][0]>=65&&a[i][0]<=90)||(a[i][0]>=97&&a[i][0]<=122))
  {
   len=strlen(a[i]);
    for(j=0;j<len;j++)
     {
        if(a[i][j]=='_'||(a[i][j]>=65&&a[i][j]<=90)||(a[i][j]>=97&&a[i][j]<=122)||(a[i][j]>=48&&a[i][j]<=57))
        flag=1;
else
flag=0;
        if(flag==0) break;
      }

  }
if(flag==1) printf("1\n");
else printf("0\n");
}
return 0;
}
