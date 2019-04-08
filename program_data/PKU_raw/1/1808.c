int fuck(int n,int m)
{
    int i,cnt=1;
    if(m>=sqrt(n))
    {return 1;}
        for(i=m;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                cnt+=fuck(n/i,i);     
            }   
                            
        }
        return cnt;
    
}
int main()
{
    int t, n, k;
    cin>>t;
    for(k=1;k<=t;k++)
    {
        cin>>n;
        cout<<fuck(n,2)<<endl;             
    }
    int x;cin>>x;
    return 0;
    
}
