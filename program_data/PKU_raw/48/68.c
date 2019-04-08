int main()
{
    int k,n;
    scanf("%d%d",&k,&n);
    int a[12][12][5];
    int i,j,l,x;
    for(i=1;i<=11;i++)
    {
                     for(j=1;j<=11;j++)
                     {
                                       for(l=0;l<=4;l++)
                                       {
                                                         a[i][j][l]=0;
                                       }
                     }
    }
    a[6][6][0]=k;
    for(l=1;l<=n;l++)
    {
                     for(i=2;i<=10;i++)
                     {
                                       for(j=2;j<=10;j++)
                                       {
                                                         a[i][j][l]=
                                                         a[i-1][j-1][l-1]
                                                         +a[i-1][j][l-1]
                                                         +a[i-1][j+1][l-1]
                                                         +a[i][j-1][l-1]
                                                         +a[i][j+1][l-1]
                                                         +a[i+1][j-1][l-1]
                                                         +a[i+1][j][l-1]
                                                         +a[i+1][j+1][l-1]
                                                         +2*a[i][j][l-1];
                                       }
                     }
    }
    for(i=2;i<=9;i++)
    {
                     for(j=2;j<=9;j++)
                     {
                                      printf("%d ",a[i][j][n]);
                     }
                     printf("%d\n",a[i][10][n]);
    }                                     
     for(j=2;j<=9;j++)
     {
                      printf("%d ",a[10][j][n]);
     }
     printf("%d",a[10][10][n]);
     //scanf("%d",&l);
     getchar();getchar();
     return 0;
}    
