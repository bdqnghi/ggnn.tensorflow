int main()
{
	int n, a[32] = {1}, compute[32] = {0}, k;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < 32; j++)
			compute[j] += a[j] * 2;
		for(int j = 0; j < 32; j++)
		{
			compute[j + 1] += compute[j] / 10;
			compute[j] %= 10;
		}
		for(int j = 0; j < 32; j++)
			a[j] = compute[j];
		memset(compute, 0, sizeof(compute));
	}
	for(k = 31; k >= 0; k--)
		if(a[k])
			break;
	for(int i = k; i >= 0; i--)
		cout << a[i];
	cout << endl;
	return 0;
}