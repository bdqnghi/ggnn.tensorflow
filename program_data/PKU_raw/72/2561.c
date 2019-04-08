
int main()
{
    int a[40][40]={0};
    int b[40][40]={0};
    int m,n,m1,n1;
    scanf("%d %d",&m,&n);
    for (m1=1; m1<=m; m1++) {
        for (n1=1; n1<=n; n1++) {
            scanf("%d",&a[m1][n1]);
        }
    }
    
    for (m1=1; m1<=m; m1++) {
        for (n1=1; n1<=n; n1++) {
            if (a[m1][n1]>=a[m1-1][n1]&&a[m1][n1]>=a[m1][n1-1]&&a[m1][n1]>=a[m1][n1+1]&&a[m1][n1]>=a[m1+1][n1])
            {
                b[m1][n1]=1;
            }
        }
    }
    
    for (m1=1; m1<=m; m1++) {
        for (n1=1; n1<=n; n1++) {
            if (b[m1][n1]==1)
            {
                printf("%d %d\n",m1-1,n1-1);
            }
        }
    }
}