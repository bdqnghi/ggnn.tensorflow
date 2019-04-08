void main()
{int n,i,j,k=0,a[301]={0};
char c[301];
gets(c);
n=strlen(c);
for(i=97;i<123;i++)
{for(j=0;j<n;j++)
{if(c[j]==i)
a[i]++;}
}
for(i=97;i<123;i++)
{if(a[i]!=0)
{printf("%c=%d\n",i,a[i]);
k++;}}
if(k==0)
printf("No");
}