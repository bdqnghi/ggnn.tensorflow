int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}
int main()
{
    int k,i,j,h[25],dp[25];
    scanf("%d",&k);
    for(i=0;i<k;i++) scanf("%d",&h[i]);
    for(i=0;i<k;i++) dp[i]=1;
    for(i=1;i<k;i++)
        for(j=0;j<i;j++)
            if(h[j]>=h[i]) dp[i]=max(dp[i],dp[j]+1);
    int m=0;
    for(i=0;i<k;i++) m=max(m,dp[i]);
    printf("%d\n",m);
}