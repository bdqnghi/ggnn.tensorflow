int main()
{
	int n, c, a[100000 + 10] = {0};
	int i, j;
	cin >> n;
	for (i = 0 ; i < n; i ++)
		cin >> a[i];
	cin>>c;
	for (i = 0; i < n; i ++)
	{
		if (a[i] == c)
		{
			for (j = i; j < n; j ++)
			{
				a[j] = a[j + 1];
			}
			n --;
			i --;
		}
	}
	int first = 1;
	for (i = 0; i < n; i ++)
	{
		if (first) {cout << a[i]; first = 0;}
		else cout << " " << a[i];
	}
	cout << endl;
	return 0;
		
}