int main() 
{
    int n, i, j;
    double x[1000]={0}, y[1000]={0}, d=0, max=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x[i]>>y[i];     
    }
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            if(d>max)
                max=d;       
        }     
    }
    cout<<fixed<<setprecision(4)<<max;
    int q;cin>>q;
    return 0;
}