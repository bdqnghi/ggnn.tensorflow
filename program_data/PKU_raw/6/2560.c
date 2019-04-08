int main()
{
    int k, m, n, i, j, sum;
    cin >> k;
    while ( k-- )
    {
        sum = 0;
        cin >> m >> n;
        int a[m][n];
        for ( i = 0; i < m; i++ )
            for ( j = 0; j < n; j++ )
                cin >> *(*(a+i)+j);
        if ( m == 1 )                     //??????,???????? 
        {
            for ( i = 0; i < n; i++ )
                sum += *(*(a)+i);
            cout << sum << endl;
            continue;
        }
        if ( n == 1 )
        {
            for ( i = 0; i < m; i++ )
                sum += *(*(a+i));
            cout << sum << endl;
            continue;
        }
        for ( i = 0; i < n; i++ )         //???????????? 
        {
            sum += *(*(a)+i);
            sum += *(*(a+m-1)+i);
        }
        for ( i = 1; i < m - 1; i++ )     //???????????? 
        {
            sum += *(*(a+i));
            sum += *(*(a+i)+n-1);
        }
        cout << sum << endl; 
    }
    
    return 0;
}
