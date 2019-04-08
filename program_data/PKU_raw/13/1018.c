int main()
{
	int a[20001], i, flag[91] = {0}, n;
	cin >> n;
	for(i = 0; i < n; i++)
	
		cin >> a[i];
	cout << a[0];
	flag[a[0] - 10] = 1;
	for(i = 0; i < n; i++)
	{
		if(flag[a[i] - 10] == 0) 
		{
			cout << ' ' << a[i];
			flag[a[i] - 10] = 1;

		}
		else continue;
	}
	return 0;

}