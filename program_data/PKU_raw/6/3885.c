int main()
{
    int k;
    scanf("%d",&k);
    while(k--)
    {
        int m,n,sum=0;
        scanf("%d %d",&m,&n);
        int i,j,a[100][100];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if((i==0)||(i==m-1)||(j==0)||(j==n-1))
                    sum=sum+a[i][j];
                else
                    continue;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}