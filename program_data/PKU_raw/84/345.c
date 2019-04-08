main()
{ 
    int n=0;    //????
    int i=0;
    int max=0;
    int cimax=0;
    cin>>n; 
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=n-1;i++)           //????? 
    {
        if(max<a[i])
           max=a[i];
    }
    for(i=0;i<=n-1;i++)      //????? 
    {
        if(a[i]==max)
           a[i]=0;
    }
    for(i=0;i<=n-1;i++)       //????? 
    {
        if(cimax<a[i])
           cimax=a[i];
    }
    cout<<max<<'\n'<<cimax<<endl;
    return 0;
}