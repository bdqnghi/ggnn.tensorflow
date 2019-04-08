int a[9][9],b[9][9],i,j,k,m,n;
int main()
{
    scanf("%d %d",&m,&n);
    a[4][4]=m;
    for (i=1;i<=n;i++)
    {
        for (j=0;j<9;j++)
            for (k=0;k<9;k++)
            {
                if (a[j][k]>0)
                {
                    b[j-1][k-1]+=a[j][k];
                    b[j-1][k]+=a[j][k];
                    b[j-1][k+1]+=a[j][k];
                    b[j][k-1]+=a[j][k];
                    b[j][k+1]+=a[j][k];
                    b[j+1][k-1]+=a[j][k];
                    b[j+1][k]+=a[j][k];
                    b[j+1][k+1]+=a[j][k];
                    b[j][k]+=2*a[j][k];
                }
            }
        for (j=0;j<9;j++)
            for (k=0;k<9;k++)
            {
                a[j][k]=b[j][k];
                b[j][k]=0;
            }
    }
    for (j=0;j<9;j++)
    {
        for (k=0;k<8;k++)
            printf("%d ",a[j][k]);
        printf("%d\n",a[j][8]);
    }
    return 0;
}
