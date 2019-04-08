int a[20][20],b[20][20];
void print()
{
     int i,j;
     for (i=1;i<=9;i++)
     for (j=1;j<=9;j++)
        if (j<9) printf("%d ",a[i][j]);
        else printf("%d\n",a[i][j]);
}
main()
{     int m,n,i,j,d;
      scanf("%d %d",&m,&n);
      for (i=0;i<=10;i++)
      for (j=0;j<=10;j++)
      a[i][j]=0;
      a[5][5]=m;
      
      for (d=1;d<=n;d++)
      {
          for (i=1;i<=9;i++)
          for (j=1;j<=9;j++)
          b[i][j]=0;
          for (i=1;i<=9;i++)
          for (j=1;j<=9;j++)
          if (a[i][j]>0) 
          {
          b[i][j]=b[i][j]+a[i][j]*2;
          b[i-1][j-1]=b[i-1][j-1]+a[i][j];
          b[i-1][j]=b[i-1][j]+a[i][j];
          b[i-1][j+1]=b[i-1][j+1]+a[i][j];
          b[i][j-1]=b[i][j-1]+a[i][j];
          b[i][j+1]=b[i][j+1]+a[i][j];
          b[i+1][j-1]=b[i+1][j-1]+a[i][j];
          b[i+1][j]=b[i+1][j]+a[i][j];
          b[i+1][j+1]=b[i+1][j+1]+a[i][j];
          }
          for (i=1;i<=9;i++)
          for (j=1;j<=9;j++)
          a[i][j]=b[i][j];
          if (d==n) 
          print();
      }
}
