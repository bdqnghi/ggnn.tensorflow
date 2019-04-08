int main()
{
	int n, k, l = 0, count = 0;
	cin >> n;
	int num[100001] = {0};
	int Num[100001] = {0};

	for(int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	cin >> k;

	for(int j = 0; j < n; j++)
	{
		if(num[j] != k)
		{
			Num[l] = num[j];
			l++;
		}
		else
			count++;
	}

	for(int p = 0; p < n - count; p++)
	{
		if(p == 0)
			cout << Num[p];
		else
			cout << " " << Num[p];
	}
	return 0;
}
