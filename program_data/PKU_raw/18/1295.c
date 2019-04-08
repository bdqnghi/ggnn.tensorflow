int a[100][100];
void minu ( int n );
void shrink ( int n );
int main()
{
    int n, i, j, k, sum, x;
    cin >> n;
    for ( i = 0; i < n; i++ )
    {
		sum = 0;
        for ( j = 0; j < n; j++ ) 
		{
            for ( k = 0; k < n; k++ )
			{
                cin >> a[j][k];
			}
		}
		for ( x = n; x > 1; x-- )
		{
			minu ( x );
			sum += a[1][1];
			shrink ( x );
		}
        cout << sum << endl;
    }
    return 0;
}
void minu ( int n )
{
	int i, j, min;
    for ( i = 0; i < n; i++ )
    {
        min = a[i][0];
        for ( j = 1; j < n; j++ )
		{
            if ( a[i][j] < min )
			{
                min = a[i][j];
			}
		}
        for ( j = 0; j < n; j++ )
		{
            a[i][j] -= min;
		}
    }
    for ( i = 0; i < n; i++ )
    {
        min = a[0][i];
        for ( j = 1; j < n; j++ )
		{
            if ( a[j][i] < min )
			{
                min = a[j][i];
			}
		}
        for ( j = 0; j < n; j++ )
		{
            a[j][i] -= min;
		}
    }
}
void shrink ( int n )
{
	int i, j;
    for ( i = 1; i < n - 1; i++ )
    {
        a[0][i] = a[0][i + 1];
        a[i][0] = a[i + 1][0];
        for ( j = 1; j < n - 1; j++ )
            a[i][j] = a[i + 1][j + 1];
    }
}
