int main ()
{
	int n, i, k = 0, num;
	int a[100] = {0}, b[100];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> num;
		if(a[num] == 0)
		{
			a[num] ++;
			b[k] = num;
			k++;
		}
	}
	for (i = 0; i < k - 1; i++)
		cout << b[i] << " ";
	cout << b[k - 1];
	return 0;
}

	
