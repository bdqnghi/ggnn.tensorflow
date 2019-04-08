main()
{
    int m,n;
    int b[5][11][11]={0};
    int i,j,k;
    scanf("%d %d",&m,&n);
    b[0][5][5]=m;
    for(i=1;i<n+1;i++)
    {
        for(j=5-i;j<=5+i;j++)
        {
            for(k=5-i;k<=5+i;k++)
            {
                b[i][j][k]=2*b[i-1][j][k]+b[i-1][j][k-1]+b[i-1][j][k+1]+b[i-1][j-1][k-1]+b[i-1][j-1][k+1]+b[i-1][j-1][k]+b[i-1][j+1][k]+b[i-1][j+1][k-1]+b[i-1][j+1][k+1];
            }
        }
    }
    for(i=1;i<10;i++)
    {
    printf("%d",b[n][i][1]);
    for(j=2;j<10;j++)
    printf(" %d",b[n][i][j]);
    printf("\n");
    }
}

