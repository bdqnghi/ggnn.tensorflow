int main()
{
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        int n;
        cin>>n;
        double a[n],x=0,S=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        x+=a[j]; 
        x=x/n;
        for(int j=0;j<n;j++)
        {
            S+=pow(x-a[j],2);
        }
        S=S/n;
        S=sqrt(S);
        
        cout<<fixed<<setprecision(5)<<S<<endl;
    }
    
    return 0;
}
