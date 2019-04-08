int main()
{
    int i,n,s;
    double i0;
    i=1,s=0;
    cin>>n;
    while(i<=n)
    {
        if(i%7==0||floor(i/10)==7||i-floor(i/10)*10==7)i=i+1;
        else s=s+i*i,i=i+1;
    }
    cout<<s;
    return 0;
}
