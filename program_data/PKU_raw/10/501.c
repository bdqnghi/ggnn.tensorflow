int main()
{
	int n;
	int num[30];
	int count[30];
	cin >> n;
	int i;
	int j;
	for(i = 0; i < n; i ++)
	{
		cin >> num[i];
		count [i] = 1;
	}
	for(i = 0; i < n; i ++)
	{
		for(j = 0; j < i; j ++)
		{
			if(num[i] <= num[j])
			{
				if(count[i] < count[j] + 1)
				{
					count[i] = count[j] + 1;
				}
			}
		}
	}
	int max = 1;
	for(i = 0; i < n; i ++)
	{
		if(count[i] > max)
		{
			max = count[i];
		}
	}
	cout << max << endl;
	return 0;
}