int main()
{
    int a[9][9]={0},b[9][9]={0};
    int i,j,k,m,n,fx,fy;
    scanf("%d %d",&m,&n);
    a[4][4]=m;
    for(k=0;k<n;k++)
    {
        for(i=0;i<9;i++)
            for(j=0;j<9;j++)
            b[i][j]=0;
        for(i=1;i<8;i++)
        {
            for(j=1;j<8;j++)
            {
                b[i][j]=b[i][j]+a[i][j];
                for(fx=-1;fx<=1;fx++)
                {
                    for(fy=-1;fy<=1;fy++)
                    {
                        b[i+fx][j+fy]=b[i+fx][j+fy]+a[i][j];
                    }
                }
            }
        }
        for(i=0;i<9;i++)
            for(j=0;j<9;j++)
                a[i][j]=b[i][j];
    }
    for(i=0;i<9;i++)
    {
        printf("%d",a[i][0]);
        for(j=1;j<9;j++)
            printf(" %d",a[i][j]);
        printf("\n");
    }
}
