int main()
{
	char a[100][100], b[100][100];
	int s[100][100]={0};
	int c=0;
	int p=0;
	int i, j;
	int k;
	int n;
	cin >> n;
	for ( i=0; i<n; i++ )
		cin >> a[i] >> b[i];
	for ( k=0; k<n; k++ )
	{
		c=0;
		p=0;
		for ( i=strlen(a[k])-1, j=strlen(b[k])-1; j >= 0; i--, j-- )
		{
			s[k][c] += a[k][i]-'0'-(b[k][j]-'0');
			if ( s[k][c]<0 )
			{
				s[k][c] += 10;
				s[k][c+1]--;
			}
			c++;
		}
		for ( ; i >= 0; i-- )
		{
			s[k][c] += a[k][i]-'0';
			if ( s[k][c]<0 )
			{
				s[k][c] += 10;
				s[k][c+1]--;
			}
			c++;
		}
		for ( i=100; i >= 0; i-- )
			if ( s[k][i] == 0 && p == 0 )
				continue;
			else
			{
				p=1;
				cout << s[k][i];
			}
		if ( p == 0 )
			cout << "0";
		cout << endl;
	}
	return 0;
}