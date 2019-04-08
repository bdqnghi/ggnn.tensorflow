
int main()
{
	int x1[1001] = {0}, y1[1001] = {0}, i, j = 1, k = 1, sum, lenx, leny, max = 0, count;
	char x[10000], y[10000];
	cin.getline(x, 10000);
	cin.getline(y, 10000);
	lenx = strlen(x);
	leny = strlen(y);
	for (i = 0; i <= lenx - 1; i++)
	{
		if (x[i] != ',')
			x1[j] = x1[j] * 10 + (x[i] - '0');
		else
			j++;
	}
	for (i = 0; i <= leny - 1; i++)
	{
		if (y[i] != ',')
			y1[k] = y1[k] * 10 + (y[i] - '0');
		else
			k++;
	}
	sum = j;
	for (k = 1; k <= 1000; k++)
	{
		count = 0;
		for (j = 1; j <= sum; j++)
			if (x1[j] <= k && y1[j] > k)
				count += 1;
		if (count > max)
			max = count;
	}
	cout << sum << " " << max << endl;

	return 0;
}
