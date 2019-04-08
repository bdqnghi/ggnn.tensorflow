int main()
{
	char a[500] , c;
	int t = 0 , i , len;
	cin >> a;
	len = strlen(a);
	c = a[0];
	t = 1;
	if (c >= 'a' && c <= 'z')
	{
		   c = c - 32;
	}
	for (i = 1 ; i <= len - 1 ; i++)
	{
		if (c >= 'a' && c <= 'z')
		{
		   c = c - 32;
		}
		if (a[i] == c || a[i] == c + 32)
		{
			t++;
		}
		else
		{
			cout << '(' << c << ',' << t << ')';
			c = a[i];
			t = 1;
		}
	}
	cout << '(' << c << ',' << t << ')';
	return 0;
}

