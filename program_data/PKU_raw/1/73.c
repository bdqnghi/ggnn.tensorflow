int fun(int m,int n)
{
    int i,sum=1;
    if(n==1)
    {
        for(i=2;i*i<=m;i++)
        {
            if(m%i==0)
            sum+=fun(m/i,i);
        }
    }
    else
    for(i=n;i*i<=m;i++)
    {
        if(m%i==0)
        {
            sum+=fun(m/i,i);
        }
    }
    return sum;
}
int main()
{
    int n,i,b;
    int a[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>b;
        a[i]=fun(b,1);
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}
