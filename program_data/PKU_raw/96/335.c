int main()
{
	char a[100];
	int i, j, k, s, c[100] = {0}, b[100] = {0}, x = 0, t, u;
	cin >> a;
	s = strlen(a);
	for ( i = 0; a[i] != '\0'; i++ )
	{
		c[i] = a[i] - '0';
	}
    for ( j = 0; j <= s - 1; j++ )
	{
		x = x * 10 + c[j];
        t = x / 13;
		b[j] = t;
		x = x % 13;
	}
	i = 0;
	while ( b[i] == 0 )
	{
		if ((b[2] == 0) && ( b[1] == 0))
		{
			i = 0;
			break;
		}
		else
			i++;
	}
	for ( k = i; k <= s - 1; k++)
		if ( i == 0)
		{
			cout << 0;
			break;
		}
		else
			cout << b[k];
	cout<<endl<< x;
	return 0;
}

