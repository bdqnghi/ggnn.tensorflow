

int main()
{
	char c;
	int x[1001], y[1001], sum[1001] = {0};
	int i, j, n, h, m, k, max = 0;
	for(i = 0; ; i++)
	{
		cin >> x[i];
		c = getchar();
		if(c == '\n')
			break;
	}
	for(j = 0; j <= i; j++)
	{
		cin >> y[j];
		c = getchar();
	}
	for(k = 0; k < 1000; k++)
	{
		for(m = 0; m <= i; m++)
		{
			if(x[m] <= k && y[m] > k)
			{
				sum[k]++;
			}
		}
	}
	for(h = 0; h < 1000; h++)
	{
		if(sum[h] > max)
			max = sum[h];
	}
	cout << i + 1<<" " << max << endl;
	return 0;
}


