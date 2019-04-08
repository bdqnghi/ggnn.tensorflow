int main()
{
	int start[1000], out[1000], time[1001];  // in out?????0-999
	memset(time,0,sizeof(time));
	int i = 0, j = 0, k = 0, max = 0;
	char c;
	while (cin >> start[i])
	{
		c = cin.get();
		if (c != '\n')
		{
			i++;
		}
		else
		{
			break;
		}
	}
	while (cin >> out[j])
	{
		c = cin.get();
		if (c != '\n')
		{
			j++;
		}
		else 
		{
			break;
		}
	}
	for (k = 0; k <= i ; k++)
	{
		for (int s = start[k]; s < out[k]; s++)
		{
			time[s]++;
		}
	}
	for (int r = 0; r < 1001; r++)
	{
		if (max < time[r])
		{
			max = time[r];
		}
	}
	cout << i + 1 << " " << max ;
	return 0;
}
		