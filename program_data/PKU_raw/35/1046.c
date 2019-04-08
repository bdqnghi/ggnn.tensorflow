int main()
{
    int a[8][8],i,j,k,m,n,b=0,in,jn,p=1;
    scanf("%d,%d",&n,&m);
    for (j=0;j<n;j++)
    {
        for (i=0;i<m;i++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (k=0;k<n;k++)
    {
b=0;
for (i=0;i<m;i++)
{
if (b<a[i][k]){b=a[i][k];in=i;jn=k;}
else continue;
}
for (j=0;j<n;j++)
{
if (b>a[in][j]){break;}
else if (j==n-1&&b<=a[in][j]){k=n;p=0;}
}
}
if (p==1){printf("No");}
else {printf("%d+%d\n",jn,in);}
return 0;
}
