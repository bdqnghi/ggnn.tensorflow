int main()
{
int I,m,n,a[100][100];
int i,j,k,sum;
scanf("%d",&I);
for (k=0;k<I;k++)
{
sum=0;
scanf("%d%d",&m,&n);
for (i=0;i<m;i++)
{
for (j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for (i=0;i<m;i++)
sum=sum+a[i][0]+a[i][n-1];
for (i=0;i<n;i++)
sum=sum+a[0][i]+a[m-1][i];
sum=sum-a[0][0]-a[0][n-1]-a[m-1][n-1]-a[m-1][0];
if ((m==n)&&(m==1))
sum=a[0][0];
printf("%d\n",sum);
}
return 0;
}