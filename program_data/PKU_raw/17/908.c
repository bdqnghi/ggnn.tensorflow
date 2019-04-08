int main()
{
	int n, i, left[102], len, j, k; 
	char *p = NULL; 
	char str[102]; 
	cin >> n; 
	for ( i = 1; i <= n; i++ )
	{
		k = 0; 
		cin >> str;
		cout << str << endl;
		len = strlen(str); 
		p = str; 
		for ( ; p < str + len; p++ )
		{
			if ( *p != '(' && *p != ')' )
				*p = ' '; 
		} 
		for ( j = 0; j < len; j++ )
		{
			if ( str[j] == '(' )
			{
				k++; 
				left[k] = j; 
			}
			if ( str[j] == ')' )
			{
				if ( k == 0 )
					str[j] = '?'; 
				else
				{
					left[k] = -1; 
					k--; 
				}
			}
		}
		if ( k == 0 )
		{
			for ( j = 0; j < len; j++ )
			{
				if ( str[j] != '?' )
					cout << " "; 
				else
					cout << str[j]; 
			}
			cout <<endl; 
		}
		else
		{
			for ( ; k > 0; k-- )
				str[left[k]] = '$'; 
			for ( j = 0; j < len; j++ )
			{
				if ( str[j] != '?' && str[j] != '$' )
					cout << " "; 
				else
					cout << str[j]; 
			}
			cout << endl; 
		}
	}
	return 0; 
}