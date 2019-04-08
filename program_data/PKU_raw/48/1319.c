int main()
{
    int m,n;
    int a[11][11],add[11][11];
    for (int i=0;i<11;i++)
    {
        for (int j=0;j<11;j++)
        {
            a[i][j]=0;
            add[i][j]=0;
        }
    }
    scanf ("%d %d",&m,&n);
    a[5][5]=m;
    for (int i=0;i<n;i++)
    {
        for (int x=1;x<10;x++)
        {
            for (int y=1;y<10;y++)
            add[x][y]=a[x][y]+a[x-1][y]+a[x][y-1]+a[x-1][y-1]+a[x-1][y+1]+a[x][y+1]+a[x+1][y+1]+a[x+1][y]+a[x+1][y-1];
        }
        for (int x=1;x<10;x++)
        {
            for (int y=1;y<10;y++)
            a[x][y]=a[x][y]+add[x][y];
        }
    }
    for (int i=1;i<10;i++)
    {
        for (int j=1;j<10;j++)
        {
            if (j==1) printf ("%d",a[i][j]);
            else printf (" %d",a[i][j]);
        }
        printf ("\n");
    }
    return 0;
}