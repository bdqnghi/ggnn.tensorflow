//****************************************************************
// ???1000012789_7                                            *
// ???wusy                                                    *
// ???11,10                                                   *
// ???????                                                *
//****************************************************************
char x0[100000], y0[100000];
int x[1000], y[1000]; 
int main()
{
	int i, j, time[1000], people = 0, most = 0, max = 0;
	memset(x, 0, sizeof(x));
	memset(y, 0, sizeof(y));
	memset(time, 0, sizeof(time));

	cin.getline(x0,10000);
	cin.getline(y0,10000);

	for (i = 0; x0[i] != '\0'; i++)
	{
		if (x0[i] == ',')
			people++;
	}
	people++;

	j = 0;
	for (i = 0; x0[i] != '\0'; i++)
	{
		if (x0[i] != ',')
		{
			x[j] = x[j] * 10 + x0[i] - '0';
		}
		if (x0[i] == ',')
			j++;
	}

	j = 0;
	for (i = 0; y0[i] != '\0'; i++)
	{
		if (y0[i] != ',')
		{
			y[j] = y[j] * 10 + y0[i] - '0';
		}
		if (y0[i] == ',')
		{
			y[j]--;
			j++;
		}
	}

	for (i = 0; i <= people - 1; i++)
		for (j = x[i]; j <= y[i]; j++)
			time[j]++;

	for (i = 0; i <= 999; i++)
		if (time[i] > max)
			max = time[i];

	cout << people << " " << max << endl;
	return 0;
}

