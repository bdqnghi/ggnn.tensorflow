int main()
{
     int a[100],b[100],i,n,k,t;
     cin>>n;
     for(i=0;i<=n-1;i++)cin>>a[i];
     cin>>k;
     cout<<a[n-1];
     for(i=1;i<=n-1;i++){b[i]=a[n-i-1];cout<<" "<<b[i];}
     return 0;
}