int main()
{
    int n,judge=0;
    scanf("%d",&n);
    int *b=(int *)malloc(n*sizeof(int));
    int i,j;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            b[judge]=i;
            judge++;
        }
    }
    int count=0;
    for(int k=0;k<=judge-2;k++)
    {
        if(b[k]+2==b[k+1])
        {
            printf("%d %d\n",b[k],b[k+1]);
            count++;
        }
    }
    if(count==0)
    {
        printf("empty");
    }
}
