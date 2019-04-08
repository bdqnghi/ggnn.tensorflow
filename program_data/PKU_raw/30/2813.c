int main()
{
    int n, i, hash[100], sum=0;
    cin>>n;
    for(i=1; i<=n; i++)
      {
        hash[i]=1;
        if(i>=70 && i<=79)
          hash[i]=0;
        else if(i%10==7)
          hash[i]=0;
        else if(i%7==0)
          hash[i]=0;     
      }
    for(i=1; i<=n; i++)
      {
        if(hash[i]==1)
        sum=sum+i*i;     
      }
    cout<<sum;
    int a;cin>>a;
    return 0;
    
    }
