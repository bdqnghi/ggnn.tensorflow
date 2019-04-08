int main()
{
    int n,a[1000],b[1000],c[1000],i,t[13]={0,31,29,31,30,31,30,31,31,30,31,30,31},q[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int y[1000],w,k,z;
    cin>>n;
    for(i=1;i<=n;i++)
    {
                     cin>>a[i]>>b[i]>>c[i];
                     if(b[i]>c[i])
                     {
                                  w=b[i];
                                  b[i]=c[i];
                                  c[i]=w;
                     }
                     y[i]=0;
    }
    for(i=1;i<=n;i++)
    {
    if(b[i]==c[i]){y[i]=0;}
    else{if((a[i]%4==0&&a[i]%100!=0)||(a[i]%400==0))
    {
                     for(k=b[i];k<=c[i]-1;k++)
                     {
                                            y[i]=y[i]+t[k];
                     }
    } 
     else{
          for(k=b[i];k<=c[i]-1;k++)
                     {
                                            y[i]=y[i]+q[k];
                     } 
          } }                                     
    }
    for(i=1;i<=n-1;i++)
    {
                     if(y[i]%7==0)
                     {
                         cout<<"YES"<<endl;
                     }
                     else{cout<<"NO"<<endl;}
    }
    if(y[n]%7==0)
    {
                      cout<<"YES"<<endl;
    } else{cout<<"NO"<<endl;}
    
    cin>>z;
    return 0;
}
