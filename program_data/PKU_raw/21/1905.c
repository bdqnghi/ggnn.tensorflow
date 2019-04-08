
float my_abs(float a)
{
	return a < 0 ? -a : a;
}

int main()
{
	//freopen("in.txt", "r", stdin);

	int n;
	scanf("%d", &n);

	float avg = 0;
	float data[400];
	for (int i = 0;i < n; i++)
	{
		scanf("%f", &data[i]);
		avg += data[i];
	}
	avg /= n;

	float dif[400];
	for (int i = 0;i < n; i++)
	{
		dif[i] = my_abs(data[i] - avg);
	}
	
	float maxDif = dif[0];
	float maxIdx = 0;
	for (int i = 1;i < n; i++)
	{
		if (maxDif < dif[i])
		{
			maxDif = dif[i];
			maxIdx = i;
		}
	}

	int result[400];
	int sp = 0;
	for (int i = 0; i < n; i++)
	{
		if (dif[i] == maxDif)
		{
			result[sp++] = data[i];
		}
	}

	if (sp == 2)
	{
		if (result[0] > result[1])
		{
			int temp = result[0];
			result[0] = result[1];
			result[1] = temp;
		}
	}

	for (int i = 0; i < sp; i++)
	{
		printf("%d%c", result[i], i==sp-1 ? '\n' : ',');
	}

	return 0;
}