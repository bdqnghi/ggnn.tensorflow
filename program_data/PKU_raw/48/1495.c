int main()
{
    int m,n,i,j,k;
    scanf("%d %d",&m,&n);
    int a[5][11][11]={{0},{0},{0}};
    a[0][5][5]=m;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<10;j++)
        {
            for(k=1;k<10;k++)
            {
                a[i][j][k]=2*a[i-1][j][k]+a[i-1][j-1][k-1]+a[i-1][j-1][k]+a[i-1][j-1][k+1]+a[i-1][j][k-1]+a[i-1][j][k+1]+a[i-1][j+1][k-1]+a[i-1][j+1][k]+a[i-1][j+1][k+1];
            }
        }
    }
    for (j=1;j<10;j++)
    {
        for (k=1;k<10;k++)
        {
            printf("%d",a[n][j][k]);
            if ((k==9)&&(j!=9))  {printf("\n");}
            else if (k!=9) {printf(" ");}
            
        }
    }
    getchar();
    getchar();
    getchar();
    return 0;
}