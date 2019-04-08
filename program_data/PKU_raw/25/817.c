void compute (int x, int time);
char num[100];
int ad[100];
int N, len = 1;
int main()
{
	int j, k;
	cin >> N;
	for (k = 0; k < 100; k++)
	{
		num[k] = '0';
		ad[k] = 0;
	}
	if (N == 0)
	{
		cout << '1';
		return 0;
	}
	num[0] = '2';
	compute(1, N);
	for (j = len - 1; j >= 0; j--)    // ????
	{
		cout << num[j];
	}
	return 0;
}

void compute (int x, int time)
{
	int i, number;
	if (time == 1)
	{
		return;   
	}
	else if (x == time)   // ?x???????x + 1
	{
		return;
	}
	x++;  // ?x??????????2^2
	for (i = 0; i < len; i++)
	{
		if (num[i] != '0')
		{
			number = num[i] - '0';   // ?num[i]??i??????
			number = number * 2;
			if (number >= 10)
			{
				num[i] = number - 10 + '0';
				ad[i + 1] = ad[i + 1] + 1;
			}
			else
			{
				num[i] = number + '0';
			}
		}
	}

	for (int s = 0; s < 100; s++)
	{
		num[s] = num[s] + ad[s];
	}

	while (num[len] != '0')
	{
		len++;
	}
	for (int r = 0; r < 100; r++)
	{
		ad[r] = 0;
	}
	compute(x, N);
}
