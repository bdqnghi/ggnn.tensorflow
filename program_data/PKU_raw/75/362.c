//?????
//2010?11?24?
//1000012753 ???
int main()
{
	int i, j = 0, k, x[2000], y[2000], count[2000] = {0}, max;
	char temp[2000];
	for (i = 0; ; i++)
	{
		cin >> x[i];
		temp[i] = cin.get();
		j++;
		if (temp[i] == '\n')
			break;
	}
	for (i = 0; i < j ; i++)
	{
		cin >> y[i];
		temp[i] = cin.get();
		if (temp[i] == '\n')
			break;
	}
	max = 0;
	for (i = 0; i <= 1000; i++)
	{
		for (k = 0; k < j; k++)
		{
			if (x[k] <= i && y[k] > i)
				count[i]++;
		}
		if (count[i] > max)
			max = count[i];
	}
	cout << j << " " << max << endl;
	return 0;
}