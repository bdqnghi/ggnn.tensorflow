int main()
{
    int a[5][11][11]={0},m,n,i,j,k,p,q;
    scanf("%d%d", &m, &n);
    a[0][5][5]=m;
    for(k=1;k<=n;k++) for(i=1;i<=9;i++) for(j=1;j<=9;j++)
    {for(p=i-1;p<=i+1;p++) for(q=j-1;q<=j+1;q++) a[k][i][j]+=a[k-1][p][q]; a[k][i][j]+=a[k-1][i][j];}
    for(i=1;i<=9;i++)
    {
                     for(j=1;j<=8;j++) printf("%d ", a[n][i][j]);
                     printf("%d\n", a[n][i][9]);
    }                                          
    return 0;
}
