main()
{
     int n,m,i,j,l,k;
     int s[10][10];
     int a[10][10];
     scanf("%d %d",&n,&k);
    
     for (i=1;i<=9;i++)
     for (j=1;j<=9;j++)
     {
     a[i][j]=0;
     s[i][j]=0;
     }
      s[5][5]=n;a[5][5]=n;
     for (l=1;l<=k;l++)
     {
     for (i=1;i<=9;i++)
     for (j=1;j<=9;j++)
      if (s[i][j]>0) 
      {
       a[i][j]+=s[i][j];
       a[i-1][j-1]+=s[i][j];
       a[i][j-1]+=s[i][j];
       a[i-1][j]+=s[i][j];
       a[i+1][j-1]+=s[i][j];
       a[i-1][j+1]+=s[i][j];
       a[i+1][j]+=s[i][j];
       a[i][j+1]+=s[i][j];
       a[i+1][j+1]+=s[i][j];
       }
     for (i=1;i<=9;i++)
     for (j=1;j<=9;j++)
     s[i][j]=a[i][j];  
     }
     for (i=1;i<=9;i++)
     {
     for (j=1;j<=8;j++)
     printf("%d ",a[i][j]);
     printf("%d\n",a[i][9]);
     }
  
}
