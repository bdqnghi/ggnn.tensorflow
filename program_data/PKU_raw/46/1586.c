

int main()
{
    int n , m , i , j , n0 , m0 , p , q , a[102][102] ; 
    cin >> n >> m ; 
    for (i = 1 ; i <= n ; i ++ )
        for (j = 1 ; j <= m ; j ++ )
            cin >> a[i][j] ; 
    n0 = n / 2 + n % 2 ; 
    m0 = m / 2 + m % 2 ; 
    if (n0 > m0)
         q = m0 ; 
    else 
         q = n0 ; 
    for (p = 1 , n0 = 1 , m0 = 1 ; p <= q ; p ++ , n0 ++ , m0 ++ , n -- , m -- )
    {
        if (m == m0)
        {
              for (i = n0 ; i <= n ; i ++ )
                  cout << a[i][m] << endl ; 
              break ; 
              }
        if (n == n0)
        {
              for (j = m0 ; j <= m ; j ++ )
                  cout << a[n][j] << endl ; 
              break ; 
              }
        for (j = m0 ; j <= m - 1 ; j ++ )
            cout << a[n0][j] << endl ; 
        for (i = n0 ; i <= n - 1 ; i ++ )
            cout << a[i][m] << endl ; 
        for (j = m ; j >= m0 + 1 ; j -- )
            cout << a[n][j] << endl ; 
        for (i = n ; i >= n0 + 1 ; i -- )
            cout << a[i][m0] << endl ; 
            }
    return 0 ; 
}
