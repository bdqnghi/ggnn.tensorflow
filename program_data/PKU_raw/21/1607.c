int main()
{
    int n,s=0,i,j,a[1000],maxm=-1,minm=2147483647;
    cin>>n;
    for(i=1;i<=n;i++)
    {
                       cin>>a[i];
                       s+=a[i];
                       if(a[i]>maxm)maxm=a[i];
                       if(a[i]<minm)minm=a[i];
    }
    int s1=minm*n,s2=maxm*n;
    if(s2-s>s-s1)
    cout<<maxm;
    if(s2-s<s-s1)
    cout<<minm;
    if(s2-s==s-s1)
    cout<<minm<<","<<maxm<<endl;
    return 0;
}
