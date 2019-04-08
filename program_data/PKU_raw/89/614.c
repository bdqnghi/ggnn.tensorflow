int main()
{
	int n, i, j, flag1;
	int a, b;
	int flag[10000] = {0};
    int num[10000] = {0};
	cin >> n;
	flag1 = 0;
	j = 0;
	while(1)
	{
		cin >> a>> b;
		if ((a == 0) && (b == 0))
			break;
		else
		{
			flag[a] = 1;
			num[b]++;
		}
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if ((flag[i] == 0) && (num[i] == n - 1))
		{
			cout <<	i << endl;
			flag1 = 1;
		}
	}
	if (flag1 == 0)
		cout << "NOT FOUND" << endl;
		
	return 0;
}
