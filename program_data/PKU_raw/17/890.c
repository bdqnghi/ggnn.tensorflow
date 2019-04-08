int main()
{
	char c[101], ans[101];
	int left[101];               //??????????? 
	int n = 0, i, t = 0;         //t?????????? 
	while ( cin >> c )
	{
		t = 0; 
		n = strlen(c);
		for ( i = 0; i < n; i++ )
		{
			ans[i] = ' ';
			if ( c[i] == '(' )
				left[t++] = i;
			if ( c[i] == ')' )
			{
				if ( t == 0 ) ans[i] = '?';
				else t--;
			}
		}
		for ( i = 0; i < t; i++ )
			ans[left[i]] = '$';
		ans[n] = '\0';
		cout << c << endl << ans << endl;
	}
}