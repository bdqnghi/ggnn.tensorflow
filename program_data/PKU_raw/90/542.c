int main()
{
    long f[102][102]={0},i,j,n,m,m1;
    scanf("%d",&n);
    for (i=1;i<=100;i++) f[i][0]=1;
    for (i=1;i<=100;i++)
     for (j=1;j<=100;j++)
      if (j>=i) f[i][j]=f[i-1][j]+f[i][j-i];
        else f[i][j]=f[i-1][j];
    for (i=0;i<n;i++)
    {
      scanf("%d%d",&m,&m1);
      printf("%ld\n",f[m1][m]);
        }
}
