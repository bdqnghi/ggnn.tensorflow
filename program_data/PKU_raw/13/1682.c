int main()
{
     int a[20000],i,n,k,t;
     cin>>n;
     for(i=0;i<=n-1;i++)cin>>a[i];
     cout<<a[0];
     for(i=1;i<=n-1;i++)
     {
          t=0;
          for(k=0;k<=i-1;k++)
          {
               if(a[i]==a[k])t=1;
          }
          if(t==0)cout<<" "<<a[i];
     }
     return 0;
}