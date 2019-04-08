
int main()
{
	char a[5000], b[5000];
	int c[1000] = {0}, d[1000] = {0}, i, j, t = 0, count;
	
	cin >> a ;
	cin >> b;
	int l = strlen(a);
	j = 0;
	for (i = 0;i < l;i++)
	{
		if (a[i] != ',')
			c[j] = c[j] * 10 + (a[i] - '0');
		else
			j++;
	}
	int l1 = strlen(b);
	j = 0;
	for (i = 0;i < l1;i++)
	{
		if (b[i] != ',')
			d[j] = d[j] * 10 + (b[i] - '0');
		else
		{
			j++;
			t++;
		}
	}
	int sum = 0;
	for (i = 1;i < 1000;i++)
	{
		count = 0;
		for (j = 0;j < t+1;j++)
		{
			if (i >= c[j] && i < d[j])
				count++;
		}
		sum =( sum > count )? sum : count;
	}
	cout << t + 1 << " " << sum;

	return 0;
}

