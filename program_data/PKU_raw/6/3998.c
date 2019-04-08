int main()
{
    int m,n;
    int nums;
    int jz[100][100]={0};
    scanf("%d",&nums);
    int i,j,k;
    int sum;
    for (i=0;i<100;i++)
        for (j=0;j<100;j++)
            jz[i][j]=0;
    for (i=0;i<nums;i++)
    {
        sum=0;
        scanf("%d %d",&m,&n);
        for (j=0;j<m;j++)
            for (k=0;k<n;k++)
                scanf("%d",&jz[j][k]);
        
        for (j=0;j<n;j++)
            sum=sum+jz[0][j];
        if (m-1!=0)
            for (j=0;j<n;j++)
                sum=sum+jz[m-1][j];
        for (j=1;j<=m-2;j++)
            sum=sum+jz[j][0];
        if (n-1!=0)
            for (j=1;j<=m-2;j++)
                sum=sum+jz[j][n-1];
        printf("%d\n",sum);
    }
        return 0;
}
