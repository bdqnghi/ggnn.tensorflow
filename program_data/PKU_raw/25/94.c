int a[MAXN];
int n,i;
int main()
{
    cin>>n;
    a[0]=1;
    while(n--)
    {
        for(i=0;i<MAXN;i++)      
        a[i]*=2;
        for(i=0;i<MAXN-1;i++)
        {
            a[i+1]+=a[i]/10;
            a[i]%=10;   
        }
    }
    for(i=MAXN-1;i>0&&a[i]==0;i--);//????? ????????? 
    for(;i>=0;i--)
        cout<<a[i];
        cout<<endl;
     return 0;  
  
  
} 
