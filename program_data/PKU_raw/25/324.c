int ans[1000];
int main()
{
    memset(ans,0,sizeof(ans));
    int n,i;
    cin>>n;
    ans[1]=1;
    ans[0]=0;
    for(;n>0;n--)
    {
        for(i=1;i<1000;i++)
        {
            ans[i]=ans[i]*2+ans[i-1]/10;
            ans[i-1]=ans[i-1]%10;
        }
    }
    for(i=999;ans[i]==0;i--);
    for(;i>0;i--)
    cout<<ans[i];
}
