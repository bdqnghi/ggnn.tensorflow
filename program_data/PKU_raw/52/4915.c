int main()
{
    int m,n,i,t=0;
    int a[100];
    cin >> n >> m ;
    for ( i = 0 ; i < n ; i ++ )
        cin>>a[i];
    for ( i = n - m ; i < n ; i ++ )
        { 
            t = a[i];
            cout<<t<<" "; 
        }
    for ( i = 0 ; i < n - m - 1  ; i ++ )
        { 
            t = a[i];
            cout<<t<<" ";
        }
        cout<<a[n - m - 1]<<endl;
} 
      