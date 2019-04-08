int main()
{
	int n, i, num[20010], m;
	cin >> n;
	m = n;
	for(i = 0; i < n; i++ )
		cin >> num[i];
	for(i = 0; i < n; i++)
	{
		int j;
		for(j = i + 1; j < n; j++ )
		{
			if(num[j] == num[i] && num[j] != 0)
			{
				num[j] = 0;
				m--;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		if(num[i] != 0)
		{
			m--;
			if(m > 0)
				cout << num[i] << " ";
			else
				cout << num[i] << endl;
		
		}
	}
	return 0;
}
		
