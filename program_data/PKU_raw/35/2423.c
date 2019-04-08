
int main()
{
    int maxn = 8;
    int n,m,a[maxn][maxn];
    int i,j,k,flag,flagg,tmp;

    scanf("%d,%d",&n,&m);
    flagg=0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        tmp=0;
        flag=0;
        for (j=0;j<m;j++)
        {
            if (tmp<a[i][j]) {tmp=a[i][j];k=j;}
        }
        for (j=0;j<n;j++)
        {
            if (tmp>a[j][k])
            {
                flag=1;
            }
        }
        if (flag==0) {printf("%d+%d",i,k);flagg=1;break;}
    }
    if (flagg==0) {printf("No");}
    return 0;
}
