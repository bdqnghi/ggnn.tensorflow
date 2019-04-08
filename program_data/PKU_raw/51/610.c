int main()
{
	char *p = NULL; 
	char c[510]; 
	int n, len, i, cnt[510] = {0}, t[510], s, j, max; 
	cin >> n; 
	cin.get(); 
	cin.getline(c, 510);
	len = strlen(c); 
	for ( i = 0; i < len - n; i++ )
	{
		/*cout<<cnt[2]<<endl;*/
		p = c + i + 1; 
		for ( ; p <= c + len - n + 1; p++ )
		{
			for ( s = 0; s <= n - 1; s++ )
			{
				if ( c[i+s] != *(p+s) )
					break;
			}
			if ( s == n )
				cnt[i]++; 
		}
	} 
	max = 0;  
	s = 0; 
	/*for (i = 0; i < len; i++)
		cout<<cnt[i]<<" ";
	cout<<endl;*/
	for ( j = 0; j < len; j++ )
	{
		if ( cnt[j] > max )
		{
			s = 0; 
			max = cnt[j];
			t[s] = j; 
		}
		else 
			if ( cnt[j] == max )
			{
				s++; 
				t[s] = j; 
			}
	}
	if ( max )
	{
		cout << max + 1 << endl; 
		for ( i = 0; i <= s; i++ )
		{
			/*cout << i<<endl;
			cout << t[i]<<endl;*/
			for ( j = 0; j < n - 1; j++ )
				cout << c[t[i]+j]; 
			cout << c[t[i]+j] << endl; 
		}
	}
	else
		cout << "NO" << endl; 
	return 0; 
}