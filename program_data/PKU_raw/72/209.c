main()
{
       int m,n,i,j,c;
       scanf("%d %d",&m,&n);
       int a[100][100]={0};
       for(i=1;i<=m;i++)
       {
          for(j=1;j<=n;j++)
          scanf("%d",&a[i][j]);
          }
          for(i=1;i<=m;i++)
       {
          for(j=1;j<=n;j++)
          {
             if(a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i-1][j])
             printf("%d %d\n",i-1,j-1);
          }
          }
          getchar();
          getchar();
}
