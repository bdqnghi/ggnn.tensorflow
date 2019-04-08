int main()
{
int k,m,n,i,j,l,s,x;
scanf("%d",&k);
for(l=1;l<=k;l++)
{scanf("%d%d",&m,&n);
s=0;
for(i=1;i<=m;i++)
{for(j=1;j<=n;j++)
{scanf("%d",&x);
if(i==1||i==m|j==1||j==n)
{s+=x;}}}
printf("%d\n",s);}
return 0;
}

