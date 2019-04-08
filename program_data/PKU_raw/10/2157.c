int dp[100];
int main(void)
{
    int i,j,k;
    int *h;
    int max;
    scanf("%d",&k);
    h=(int *)malloc((k+1)*sizeof(int));
    for(i=1;i<=k;i++)
    {
        scanf("%d",&h[i]);
    } 
    dp[k]=0;
    for(i=k-1;i>=0;i--)
    {
        max=0;
        for(j=i+1;j<=k;j++)
        {
            if(h[i]>=h[j])
            {
                 if(dp[j]+1>max)
                     max=dp[j]+1;             
            }
        }
        dp[i]=max;                   
    }
    int m=0;
    for(i=0;i<=k;i++)
    {
        if(dp[i]>m)
            m=dp[i];
    } 
    printf("%d",m+1);
    return 0;  
}