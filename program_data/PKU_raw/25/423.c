

int main()
{
	int n, i, j, k;
	int sum[31] = {0};
	sum[0] = 1;
	cin >> n;
	for(i = 1; i <= n; i ++)
	{
		for(j = 30; j >= 0; j --)
		{
			if(sum[j] != 0)
				break;
		}
		for(k = 0; k <= j; k ++)
		{
			sum[k] = sum[k] * 2;
		}
		for(k = 0; k <= j; k ++)
		{
			if(sum[k] > 9)
			{
				sum[k] = sum[k] - 10;
				sum[k + 1] ++;
			}
		}
	}
	for(i = 30; i >= 0; i --)
	{
		if(sum[i] != 0)
			break;
	}
	for(j = i; j >= 0; j --)
		cout << sum[j];
	cout << endl;
	return 0;
}