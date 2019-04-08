int main()
{
	int a[100000][2], b[100000], i, n;
	cin >> n;
	memset(b, 0, sizeof(b));
	for(i = 0; ; i++)
	{
		cin >> a[i][0] >> a[i][1];
		if(a[i][0] == 0 && a[i][1] == 0)
			break;
		if(a[i][0] != a[i][1])
			b[a[i][0]] = 1;
	}
	for(i = 0; i < n; i++)
	{
		if(b[i] == 0)
		{
			cout << i << endl;
			break;
		}
	}
	if(i == n)
		cout << "NOT FOUND" << endl;
	return 0;
}