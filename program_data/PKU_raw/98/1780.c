int main()
{
	int n, l[10000], num = -1, i;
	char str[10000][41];
	cin >> n;
	for ( i = 0; i < n; i ++ )
	{
		cin >> str[i];
		l[i] = strlen ( str[i] );
	}
	for ( int i = 0; i < n; i ++ )
	{
		if ( i == n - 1 )
		{
			cout << str[i];
			break;
		}
		if ( num <= 0 )
			num = l[i];
		num = num + l[i+1];
		if ( num >= 80 )
		{
			num = -1;
			cout << str[i] << endl;
		}
		else
			cout << str[i] << " ";
		num ++;
	}
	return 0;
}