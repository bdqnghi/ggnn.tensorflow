int main()
{
int a[2000];
int i,j,k,l,n,m;
n=0;
for (i=0;i<=1999;i++)
a[i]=0;
for (i=2;i<=10000;i++)
{
k=0;
for (j=2;j<=sqrt(i);j++)
{
if (i%j==0)
{
k=1;
break;
}
}
if (k==0)
{
a[n]=i;
n++;
}
}
scanf("%d",&m);
for (i=1;a[i]!=0;i++)
{
for (j=i;a[j]!=0;j++)
{
if (a[i]+a[j]==m)
{
printf("%d %d\n",a[i],a[j]);
}
}
}
return 0;
}