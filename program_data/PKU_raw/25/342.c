

int main()
{
    int a[100] , n , h , j  , i ; 
    cin >> n ; 
    memset(a , 0 , sizeof(a)) ; 
    a[1] = 1 ; 
    h = 1 ; 
    for (i = 1 ; i <= n ; i ++ )
    {
        for (j = 1 ; j <= h ; j ++ )
            a[j] += a[j] ; 
        for (j = 1 ; j <= h ; j ++ )
            if (a[j] >= 10)
            {
                a[j] = a[j] - 10 ; 
                a[j + 1] += 1 ; 
            }
        if (a[h + 1] != 0)
            h ++ ; 
    }
    for (i = h ; i >= 1 ; i -- )
        cout << a[i] ; 
    cout << endl ; 
    return 0 ; 
}
