int main()
{
    int n,max=0;
    scanf("%d",&n);
    int d[100];
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&d[i]);                
    }
    int w[100];
    for(i=0;i<n;i++)
    w[i]=1;
    for(i=n-2;i>=0;i--)
    {
        for(j=i+1;j<n;j++)
            if(d[i]>=d[j]&&w[i]<=w[j])
                w[i]=w[j]+1;                           
    }
    for(i=0;i<n;i++)
    if(w[i]>=max)
    max=w[i];
    printf("%d",max);
    getchar();
    getchar();
    return 0;
}