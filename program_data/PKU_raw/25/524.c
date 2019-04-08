int main()
{
	int b[100] = {0};
	int n,i,count = 0,k = 1,j,flag = 0;
	cin >> n;
	b[0] = 1;
	for (j = 1;j <= n;j++)
	{
		for (i = 0;i < k;i++)
			b[i] = b[i] * 2;
		for (i = 0;i < k;i++)
		{
			if (i == k - 1 && b[i] >= 10)
				k++;
			if (b[i] >= 10)
			{
				b[i] = b[i] - 10;
			    b[i + 1]++;
			}
		}
	}
	for (i = 99;i >= 0;i--)
	{
		if (b[i] != 0)
			count = 1;
		if (count)
			cout << b[i];
	}
	return 0;
}
