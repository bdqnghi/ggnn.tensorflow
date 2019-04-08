
main()
{
    int m,n,i,j,k,s[11][11]={0},s1[11][11]={0};
    scanf("%d %d",&m,&n);
    s1[5][5]=s[5][5]=m;
    for(k=1;k<=n;k++)
    {
        for(i=5-k;i<=5+k;i++)
        {
            for(j=5-k;j<=5+k;j++)
            {
                s[i][j]=2*s1[i][j]+s1[i-1][j-1]+s1[i-1][j]+s1[i-1][j+1]+s1[i][j-1]+s1[i][j+1]+s1[i+1][j-1]+s1[i+1][j]+s1[i+1][j+1];
            }
        }
        if(k!=n)
        {
            for(i=5-k;i<=5+k;i++)
        {
            for(j=5-k;j<=5+k;j++)
            {
                s1[i][j]=s[i][j];
            }
        }
        }
    }
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j==1)printf("%d",s[i][j]);
            else printf(" %d",s[i][j]);
        }
        printf("\n");
    }
}
