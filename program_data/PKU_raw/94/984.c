int main()
{
    int a[500]={0},n,i=0,t,tmax=1;
    cin>>n;
    for(i=0;i<500;i++)
    {
        cin>>t;
        if(t%2==1)  a[t]=1;
    }
    for(i=0;i<500;i++)
    {
        if(a[i]==1)
        {
            if(i>=tmax) tmax=i;
            else tmax=tmax;
        }
    }
    for(i=1;i<tmax;i=i+2)
    {
        if(a[i]==1) cout<<i<<",";
    }
    cout<<tmax;
    return 0;
}

