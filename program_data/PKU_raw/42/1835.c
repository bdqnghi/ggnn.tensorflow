int main()
{
	int a[100000], n, k;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;
	for(int i = 0; i < n; )
		if(a[i] == k)
		{
			for(int j = i; j < n - 1; j++)
				a[j] = a[j + 1];
			n--;
		}
		else
			i++;
	cout << a[0];
	for(int i = 1; i < n; i++)
		cout << " " << a[i];
	cout << endl;
	return 0;
}