
int main()
{
	int n, i, j, a[20005], b[20005] ={0};
	cin >> n;
	for(i = 0; i < n; i++)
		cin >> a[i];
	for(i = 0; i < n; i++)
	{
		for(j = 0; b[j] != 0; j++)
		{
			if(b[j] == a[i])
				break;
		}
		if(b[j] == 0)
			b[j] = a[i];
	}
	cout << b[0];
	for(i = 1; b[i] != 0; i++)
	{
		cout << " " << b[i];
	}

	return 0;
}