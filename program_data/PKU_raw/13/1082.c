int main()
{
	int n, a[20000], i, b[101] = {0}, flag = 0;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(i = 0; i < n; i++)
	{
		if(b[a[i]] == 0)
		{
			if(flag == 0)
			{
				cout << a[i];
				flag =1;
			}
			else
			{
				cout << ' ' << a[i];
			}
			b[a[i]] = 1;
		}
		else continue;
	}
	cout << endl;
	return 0;
}