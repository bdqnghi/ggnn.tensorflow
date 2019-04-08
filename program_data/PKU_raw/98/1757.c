int main()
{
	int n, count = 0, j = 1, l;
	char a[41];
	char *p = a;
	cin >> n;
	for ( int i = 1; i <= n; i++ )
	{
		cin >> p;
		l = 0;
		for ( *p; *p != '\0'; *p++ )
		{
			l++;
		}
		count = count + l;
		p=a;
		if ( count < 80 && count != l )
		{
			cout << " " << p;
			count++;
		}
		else if ( count < 80 && count == l )
		{
			cout << p;
		}
		else
		{
			cout << endl;
			cout << p;
			count = l;
		}
	}
	return 0;
}
	
	