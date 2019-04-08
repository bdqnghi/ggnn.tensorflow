int main()
{
	int a[100], b[100], len1, len2, i, j, n, k;
	char a1[101], b1[101];
	cin >> n;
	for(k = 0; k < n; k++)
	{
		cin.get();
		cin.getline(a1, 101);
		cin.getline(b1, 101);

		len1 = strlen(a1);
		len2 = strlen(b1);
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		j = 0;
		for(i = len1 - 1; i >= 0; i--)
			a[j++] = a1[i] - '0';
		j = 0;
		for(i = len2 - 1; i >= 0; i--)
			b[j++] = b1[i] - '0';
		for(i = 0; i < 100; i++)
		{
			a[i] = a[i] - b[i];
			if(a[i] < 0)
			{
				a[i] = 10 + a[i];
				a[i + 1]--;
			}
		}
		i = 99;
		while(a[i] == 0)
			i--;
		for(; i >= 0; i--)
			cout << a[i];
		cout << endl;
	}
	return 0;
}
