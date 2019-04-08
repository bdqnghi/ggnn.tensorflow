
int main()
{
    int a[11][11]={0},b[11][11]={0};
    int n,t;
    int i,j;
    scanf("%d%d",&t,&n);
    a[5][5]=t;
    while (n>0)
    {
        for (i=1;i<=9;i++) for (j=1;j<=9;j++)
        {
                b[i][j]=2*a[i][j]+a[i-1][j]+a[i-1][j-1]+a[i-1][j+1]+
                                  a[i+1][j]+a[i+1][j+1]+a[i+1][j-1]+
                                  a[i][j-1]+a[i][j+1];
        }
        for (i=1;i<=9;i++) for (j=1;j<=9;j++)
              a[i][j]=b[i][j];
        n--;
    }
    for (i=1;i<=9;i++)
    {
        for (j=1;j<=8;j++) printf("%d ",a[i][j]);
        printf("%d\n",a[i][9]);
    }
    return 0;
}