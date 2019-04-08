
int a[10000],b[10000],c[20000],n,m;
int wrh1(int a[10000],int b[10000])
{
	cin >> n >> m;
	int i;
	for ( i = 0 ;i < n; i ++ )
		cin >> a[i];
	for ( i = 0; i < m; i ++ )
		cin >> b[i];
	return 0;
}

int wrh2( int a[10000],int b[10000])
{
	int i,j,temp;
	for ( i = 0; i < n - 1; i ++ )
	{
		for ( j = 0; j < n - i - 1; j ++ )
		{
			if ( a[j] > a[j+1] )
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for ( i = 0; i < m - 1; i ++ )
	{
		for ( j = 0; j < m - i - 1; j ++ )
		{
			if ( b[j] > b[j+1] )
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}
	return 0;
}

int wrh3( int a[10000], int b[10000] ,int c[20000])
{
	int i,j;
	for ( i = 0; i < n; i ++ )
		c[i] = a[i];
	for ( i = 0; i < m; i ++ )
		c[i + n] = b[i];
	return 0;
}

int wrh4(int c[20000])
{
	int i;
	cout << c[0];
	for ( i = 1; i < n + m; i ++ )
		cout << ' ' << c[i];
	return 0;
}

int main()
{
	wrh1(a,b);
	wrh2(a,b);
	wrh3(a,b,c);
	wrh4(c);
	return 0;
}