int main()
{
    int n,i;
    float s,k=0,l=0;
    cin>>n;
    int a[n],b[n];
    float c[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
                    cin>>b[i];
                    if(b[i]>=90&&b[i]<=100)
                    c[i]=4;
                    else if(b[i]>=85&&b[i]<=89)
                    c[i]=3.7;
                    else if(b[i]>=82&&b[i]<=84)
                    c[i]=3.3;
                    else if(b[i]>=78&&b[i]<=81)
                    c[i]=3.0;
                    else if(b[i]>=75&&b[i]<=77)
                    c[i]=2.7;
                    else if(b[i]>=72&&b[i]<=74)
                    c[i]=2.3;
                    else if(b[i]>=68&&b[i]<=71)
                    c[i]=2.0;
                    else if(b[i]>=64&&b[i]<=67)
                    c[i]=1.5;
                    else if(b[i]>=60&&b[i]<=63)
                    c[i]=1.0;
                    else c[i]=0;
                    }
                    for(i=0;i<n;i++)
                    {
                                    k=k+a[i]*c[i];
                                    l=l+a[i];
                                    }
                                    s=(float)k/(float)l;
                                    cout<<fixed<<setprecision(2)<<s<<endl;
                                    return 0;
                                    }
                    