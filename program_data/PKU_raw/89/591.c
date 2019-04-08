int main()
{
	int n, i, j, flag = 0, num = 0;
	int a[100000], b[100000], sum1[10000] = {0}, sum2[10000] = {0};
	cin>>n;
	for (i = 0; ; i++)
	{
		cin>>a[i]>>b[i];
		num++;
		if (a[i] == 0 && b[i] == 0)
			break;
	}
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < num - 1; i++)
		{
			if (a[i] == j)
				sum1[j]++;
			if (b[i] == j)
				sum2[j]++;
		}
	}
	for (j = 0; j < n; j++)
	{
		if (sum1[j] == 0 && sum2[j] == n - 1)
		{
			cout<<j<<endl;
			flag = 1;
		}
	}
	if (flag == 0)
		cout<<"NOT FOUND"<<endl;
	return 0;
}
