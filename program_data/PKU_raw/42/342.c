int main()
{
    int n, k, i, m, t;
    int a[100001];
    cin >> n ;
    for( i = 1; i <= n ; i++)
    {
          cin >> a[i] ; 
    }
    cin >> k; 
    t = 0; 
    for( i = 1; i <= n; i++)
    {
         if (a[i] == k)
         t = t + 1;
         else
         a[i-t]=a[i];
    }
    cout << a[1];
    for( i = 2; i <= n - t; i++)
    {
         cout << " " << a[i] ;
    }  
    cin >> n;
    return 0;
}
                
                
     
