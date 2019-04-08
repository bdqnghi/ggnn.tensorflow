int main()
{
	int N, a[500], i;
	cin>>N;
	for (i = 0; i < N; i ++)
	{
		cin>>a[i];
	}
	int b[500], j, k = 1;
	for (j = 0; j < N; j ++)
	{
		if (a[j] % 2 != 0)
		{
			b[k] = a[j];
			k ++;
		}
	}
	int c, d, e;
	for (c = 1; c < k; c ++)
	{
		for (d = 1; d < k - c; d ++)
		{
			if (b[d] > b[d+1])
			{
				e = b[d]; b[d] = b[d+1]; b[d+1] = e;
			}
		}
	}
	int t;
	for (t = 1; t < k - 1; t ++)
	{
		cout<<b[t]<<',';
	}
	cout<<b[k - 1]<<endl;
	return 0;
}
