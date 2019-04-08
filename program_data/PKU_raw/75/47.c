int main()
{
	char string1[100000], string2[100000];
	int x[1001], y[1001];
	memset(x, 0 ,sizeof(x));
	memset(y, 0 ,sizeof(y));
	int i, j, n, k = 0, q, p = 0;
	int power[3] = {1, 10, 100}, num[1001];
	int maxpeople = 0, time;
	memset(num, 0 ,sizeof(num));
	cin >> string1;
	for (i = 0; i <= strlen(string1) - 1; i++)
	{
		if (string1[i] == ',')
			k = k + 1;
	}
	n = k + 1;
	q = n;
	for (i = strlen(string1) - 1; i >= 0; i--)
	{
		if(string1[i] != ',')
		{
			x[q] = x[q] + (int)(string1[i] - 48) * power[p];
			p = p + 1;
		}
		else
		{
			q = q - 1;
			p = 0;
		}
	}
	cin >> string2;
	q = n;
	p = 0;
	for (i = strlen(string2) - 1; i >= 0; i--)
	{
		if(string2[i] != ',')
		{
			y[q] = y[q] + (int)(string2[i] - 48) * power[p];
			p = p + 1;
		}
		else
		{
			q = q - 1;
			p = 0;
		}
	}
	for (i = 1; i <= 1000; i++)
	{
		
		for(j = 1; j <= n; j++)
		{
			if (x[j] <= i && y[j] >= i + 1)
				num[i]++;
		}
		if (num[i] > maxpeople)
		{
			maxpeople = num[i];
			time = i;
		}
	}
	cout << n << " " <<  maxpeople << endl;
	return 0;
}