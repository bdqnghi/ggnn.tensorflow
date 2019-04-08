int main()
{
    int n, k, i, t, j, app[100];
    cin>>n>>k;
    for(j=1;j<=n;j++)
    {
        app[j]=k;             
    }
    do
    {
        app[n]+=n;
        for(i=n-1;i>=1;i--)
        {
            if(app[i+1]%(n-1)!=0)
            {
                break;
            }
            else
            {
                app[i]=(app[i+1]*n)/(n-1)+k;             
            }             
        }       
    }while(i>=1);
    
        cout<<app[1];
    
    int x;cin>>x;
    return 0;
}
