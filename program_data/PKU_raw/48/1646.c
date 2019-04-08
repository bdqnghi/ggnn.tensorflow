int m,n;
int num1[11][11]={0},num2[11][11]={0};
int i,j,t;
int num(int x,int y)
{
    int N;
    N=num1[x-1][y-1]+num1[x][y-1]+num1[x+1][y-1]+num1[x-1][y]+num1[x+1][y]+num1[x-1][y+1]+num1[x][y+1]+num1[x+1][y+1];
    return N;
}
main()
{
    scanf("%d %d",&m,&n);
    num1[5][5]=num2[5][5]=m;
    for(t=1;t<=n;t++)
    {
        for(i=5-t;i<=5+t;i++)
        {
            for(j=5-t;j<=5+t;j++)
            {
                num2[i][j]=2*num1[i][j]+num(i,j);
            }
        }
        for(i=5-t;i<=5+t;i++)
        {
            for(j=5-t;j<=5+t;j++)
            {
                num1[i][j]=num2[i][j];
            }
        }
    }
    for(i=1;i<10;i++)
        {
            for(j=1;j<10;j++)
            {
                if(j==1)printf("%d",num1[i][j]);
                else printf(" %d",num1[i][j]);
            }
            printf("\n");
        }
}
