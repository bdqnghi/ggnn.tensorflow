int x[1000];
int y[1000];
int main()
{
	char b;
	int num = 0, people, max = 0;
	for(; 1;)
	{
		b = cin.get();
		if ((b - '0' >= 0) && (b - '0' < 10))
		{
			x[num] *= 10;
			x[num] += b - '0';
		}
		if (b == ',')
		{
			num += 1;
		}
		if (b == '\n')
		{
			break;
		}
	}
	num = 0;
	for(; 1;)
	{
		b = cin.get();
		if ((b - '0' >= 0) && (b - '0' < 10))
		{
			y[num] *= 10;
			y[num] += b - '0';
		}
		if (b == ',')
		{
			num += 1;
		}
		if (b == '\n')
		{
			break;
		}
	}
	for (int i = 0; i < 1000; i++)
	{
		people = 0;
		for (int ii = 0; ii < num + 1; ii++)
		{
			if (i >= x[ii] && i < y[ii])
			{
				people += 1;
			}
			if (people > max)
			{
				max = people;
			}
		}
	}
	cout << num + 1 << ' ' << max;
	return 0;
}