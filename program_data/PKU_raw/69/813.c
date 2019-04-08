int main()
{
	char a[250], b[250];
	int s[251]={0};
	int c=0;
	int p=0;
	int i, j;
	cin >> a >> b;
	for ( i=strlen(a)-1, j=strlen(b)-1; i >= 0 && j >= 0; i--, j-- )
	{
		s[c] += a[i]-'0'+b[j]-'0';
		if ( s[c]>9 )
		{
			s[c] -= 10;
			s[c+1]++;
		}
		c++;
	}
	if ( i == -1 )
	{
		for ( ; j >= 0; j-- )
		{
			s[c] += b[j]-'0';
			if ( s[c]>9 )
			{
				s[c] -= 10;
				s[c+1]++;
			}
			c++;
		}

	}
	else
	{
		for ( ; i >= 0; i-- )
		{
			s[c] += a[i]-'0';
			if ( s[c]>9 )
			{
				s[c] -= 10;
				s[c+1]++;
			}
			c++;
		}

	}
	for ( i=250; i >= 0; i-- )
		if ( s[i] == 0 && p == 0 )
			continue;
		else
		{
			p=1;
			cout << s[i];
		}
	if ( p == 0 )
		cout << "0";
	return 0;
}