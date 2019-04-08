int main()
{
int m,q,n,i,j,p;
int a[100][100],b[100][100],c[100][100];
scanf("%d",&m);
scanf("%d",&q);
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{scanf("%d",&a[i][j]);}
}
scanf("%d",&q);
scanf("%d",&n);
for(i=0;i<q;i++)
{
for(j=0;j<n;j++)
{scanf("%d",&b[i][j]);}
}
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{
c[i][j]=0;
for(p=0;p<q;p++)
{
                c[i][j]=c[i][j]+a[i][p]*b[p][j];
}
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(j==n-1)
printf("%d\n",c[i][j]);
else
printf("%d ",c[i][j]);}
}
}
