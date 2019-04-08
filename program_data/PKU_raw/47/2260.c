int main()
{
    int n,i,j,p,num,q;//????????n?????i?j?p ?q??????num 
    cin>>n;
    int a[100];//?????100???a 
    for(i=1;i<=n;i++)//???? 
    {
                     cin>>num;
                     a[i]=num;
    }
    p=(n-n%2)/2;
    for(i=1;i<=p;i++)//???? 
    {
                     q=a[n+1-i];
                     a[n+1-i]=a[i];
                     a[i]=q;//?????????? 
    }
    for(i=1;i<=n;i++)//???? 
    {
                     if(i!=n)
                     cout<<a[i]<<" ";
                     else
                     cout<<a[i];
    }
    return 0;
}
    