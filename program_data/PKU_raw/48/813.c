int main()
{
    int m,n,i,j,k;
    scanf("%d%d",&m,&n);
    int a[5][11][11]={0};
    a[0][5][5]=m;
    for(i=0;i<n;i++)
    {
        for(j=1;j<10;j++)
        {
           for(k=1;k<10;k++)
           {
               a[i+1][j][k]=a[i][j][k]*2+a[i][j+1][k]
               +a[i][j-1][k]+a[i][j][k+1]
               +a[i][j][k-1]+a[i][j+1][k+1]
               +a[i][j+1][k-1]+a[i][j-1][k+1]
               +a[i][j-1][k-1];
           }
        }
    }
    for(i=1;i<10;i++)
    {
       for(j=1;j<10;j++)
       {
          if(j==1)
          {printf("%d",a[n][i][j]);}
          if(j>1)
          {printf(" %d",a[n][i][j]);}
       }
       if(i<9)
       {printf("\n");}
    }
}
