main()
{
char s[501];
int n,i,j,k;
scanf("%d %s",&n,s);
int t=strlen(s);
char a[501][5];
for(i=0;i<=t-n;i++)
for(j=0;j<5;j++)
a[i][j]=s[i+j];
int b[501]={0};
int c;
for(i=1;i<=t-n;i++)
{for(k=0;k<i;k++)
{c=0;
    for(j=0;j<n;j++)
{
if(a[i][j]==a[k][j])
c++;
else
break;
if(c==n)
b[k]++;
}
}
}
c=b[0];
for(i=1;i<=t-n;i++)
{if(b[i]>c)
c=b[i];
}
if(c==0)
printf("NO");
else
{printf("%d\n",c+1);
for(i=0;i<=t-n;i++)
{if(b[i]==c)
{for(j=0;j<n-1;j++)
printf("%c",a[i][j]);
if(j==n-1)
printf("%c\n",a[i][j]);
}
}
}
}
