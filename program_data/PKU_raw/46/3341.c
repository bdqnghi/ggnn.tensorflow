
int main ()
{
    int a[105][105];
    int m,n;
    cin>>n>>m;
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < m; j ++)
            cin>>a[i][j];
    int k = 0;
    for(int t = 0; t < m * n; k ++)
    {
        for(int j1 = k; j1 < m - k; j1 ++)
        {
            cout<<a[k][j1]<<endl;
		    t ++;
        }
        for(int i1 = k + 1; i1 < n - k; i1 ++)
        {
            cout<<a[i1][m - 1 - k]<<endl;
            t ++;
        }
        if( (k + 1 <= n - 1 - k) && ( m - 2 - k >= k) )
        { 
            for(int j = m - 2 - k; j >= k; j --)
            {
                cout<<a[n - 1 - k][j]<<endl;
                t ++;
            }
            for(int i = n - 2 - k; i >= k + 1; i --)
            {
                cout<<a[i][k]<<endl;
                t ++;
            }
        } 
    }		
	return 0;
}
