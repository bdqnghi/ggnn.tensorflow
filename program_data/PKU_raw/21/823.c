

int main()
{
	int num, i, c[301] = {0}, t = 300, flag = 0;
	double aver, a[301], b[301] = {0}, sum = 0.0, max;
	cin >> num;
	for (i = 0; i < num; i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	aver = sum / (double)num;
	max = 0;
	for (i = 0; i < num; i++)
	{
		b[i] = fabs(a[i] - aver);
		if ((b[i] - max) > 0)
		{

			max = b[i];
			c[t] = 0;
			t = i;
			c[i] = 1;
		}
	}
	for (i = 0; i < num; i++)
	{
		if (c[i] == 1 || fabs((double)b[i] - max) < 1e-9)
		{
			if (flag == 0)
			{
				cout << a[i];
				flag++;
			}
			else 
				cout << "," << a[i];
		}
	}
	cin >> i;
	return 0;
}
