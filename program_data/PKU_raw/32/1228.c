
int main()
{
    int N, m, n, i;
    cin >> N;
    char a[101], b[101], c[101];
    while ( N-- )
    {
        cin >> a >> b;
        m = strlen(a);
        n = strlen(b);
        int t = 0, left = 0;
        for ( i = 0; i < n; i++ )
            c[m-1-i] = b[n-1-i];
        for ( i = 0; i < m-n; i++ )
            c[i] = '0';
        //cout << a << endl << c << endl;
        for ( i = m-1; i >= 0; i-- )
        {
            if ( a[i] - c[i] + left < 0 ) t = -1;
            else t = 0;
            a[i] = ( a[i] - c[i] + left + 10 ) % 10 + '0';
            left = t;
        }
        cout << a << endl;
    }
    
    return 0;
}
