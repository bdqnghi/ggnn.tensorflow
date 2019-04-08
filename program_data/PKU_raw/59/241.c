

int main()
{
    int n , i , j , h , h0 , m , b[10502] , c[10502] ; 
    char a[102][102] ; 
    cin >> n ; 
    for (i = 1 , h = 0 ; i <= n ; i ++ )
        for (j = 1 ; j <= n ; j ++ )
        {
            cin >> a[i][j] ; 
            if (a[i][j] == '@')
            {
                h ++ ; 
                b[h] = i ; 
                c[h] = j ; 
            }
        }
    cin >> m ; 
    for (i = 0 ; i <= n + 1 ; i ++ )
    {
        a[i][0] = '#' ; 
        a[0][i] = '#' ; 
        a[n + 1][i] = '#' ; 
        a[i][n + 1] = '#' ; 
    }
    for (i = 2 ; i <= m ; i ++ )
    {
        for (j = 1 , h0 = h ; j <= h ; j ++ )
        {
            if (a[b[j]][c[j] + 1] == '.')
            {
                h0 ++ ; 
                b[h0] = b[j] ; 
                c[h0] = c[j] + 1 ; 
                a[b[h0]][c[h0]] = '@' ; 
            }
            if (a[b[j]][c[j] - 1] == '.')
            {
                h0 ++ ; 
                b[h0] = b[j] ; 
                c[h0] = c[j] - 1 ; 
                a[b[h0]][c[h0]] = '@' ; 
            }
            if (a[b[j] + 1][c[j]] == '.')
            {
                h0 ++ ; 
                b[h0] = b[j] + 1; 
                c[h0] = c[j] ; 
                a[b[h0]][c[h0]] = '@' ; 
            }
            if (a[b[j] - 1][c[j]] == '.')
            {
                h0 ++ ; 
                b[h0] = b[j] - 1 ; 
                c[h0] = c[j] ; 
                a[b[h0]][c[h0]] = '@' ; 
            }
        }
        if (h0 == h)
            break ; 
        else h = h0 ; 
    }
    for (i = 1 , h0 = 0 ; i <= n ; i ++ )
        for (j = 1 ; j <= n ; j ++ )
            if (a[i][j] == '@')
                h0 ++ ; 
    cout << h0 << endl ; 
    return 0 ; 
}
