const int MAXN=1010;
int n,ans,sum;
int a[MAXN],b[MAXN];

int battle(int x,int y)
{
    if (x==y)   return 0;
    else
    if (x>y)   return 1;
    else   return -1;
}

int main()
{
    while (1)
      {
        cin>>n;
        if (n==0)   break;
        for (int i=0;i<n;++i)  cin>>a[i];
        for (int i=0;i<n;++i)  cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        for (int i=0;i<n/2;++i)   
          {
            swap(a[i],a[n-i-1]);
            swap(b[i],b[n-i-1]);
          }
        ans=-2147483647;
        for (int i=0;i<=n;++i)
          {
            sum=0;
            for (int j=0;j<i;++j)
              sum+=battle(a[j],b[n-i+j]);
            for (int j=0;j<n-i;++j)
              sum+=battle(a[n-j-1],b[j]);
            if (sum>ans)   ans=sum;
          }
        cout<<ans*200<<endl;
      }            
}
