//********************************
//*???????????   **
//*????? 1300012707 **
//*???2013.10.30  **
//********************************
int main()
{
	int a[100001], n, num;
	cin >> n;
	for ( int i = 1; i <= n; i = i + 1)
	{
		cin >> a[i];
	}
	cin >> num;
	for ( int i = 1; i <= n; i = i + 1)
	{
		if ( a[i] == num)
		{
			n = n - 1;
			for ( int j = i; j <= n; j = j + 1)
			{
				a[j] = a[j + 1];
			}
			i = i - 1;
		}
	}
	for ( int i = 1; i <= n - 1; i = i + 1)
	{
		cout << a[i] << " ";
	}
	cout << a[n] << endl;
	return 0;
}