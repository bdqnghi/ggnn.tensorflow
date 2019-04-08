int main()
{
    int n, a[30000], i, j, hash[30000];
    cin>>n;
    for( i = 1; i <= n; i++ )
      {
        cin>>a[i];
        hash[i]=1; 
      }
    cout<<a[1];
    for( i = 2; i <= n; i++ )
      {
           
        for(j=1; j<i ; j++)
          {
            if(a[i]==a[j])
              {
                hash[i]=hash[i]*0;
              }
            else
              {
                hash[i]=hash[i];
                
              }   
          }
      }
    for( i = 2; i <= n; i++ )
      {
        if(hash[i]==1)
        cout<<" "<<a[i];   
      }
    int b;cin>>b;
    return 0;  
    
    }
