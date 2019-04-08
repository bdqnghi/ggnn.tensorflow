int main()
{
	int a[100000], b[100000], i, j, n, k = 0, m = 0, count[10000] = {0};
	cin >> n;
	for(i = 0; ;i++)
	{
		cin >> a[i] >> b[i];
		if(a[i] == 0 && b[i] == 0)
			break;
		m++;
	}
	for(i = 0; i < n; i++)
	{	for(j = 0; j < m; j++)
			if(b[j] == i)
				count[i]++;
	}
	for(i = 0; i < n; i++)
		if(count[i] == n - 1)
		{
			k = 1;
			for(j = 0; j < m; j++)
				if(a[j] == i)
					break;
			if(j == m)
			{
				cout << i << endl;
				break;
			}
			else
			{
				k = 0;
				break;
			}
		}
	if(k == 0)
		cout << "NOT FOUND" << endl;
	return 0;
}