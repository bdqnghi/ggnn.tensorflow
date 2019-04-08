int main()

{
	int w;
	int a[60], md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i, j = 0, k, l, t;
	cin >> w;
	t = 5 - w;
	if (t < 0)
	{
		t = t + 7;
	}
	for (i = 1 + t; i < 366; i+=7)
	{
		a[j] = i;
		j++;
	}
	for (k = 0; k < j; k++)
	{
		for (l = 0; l < 12; l++)
		{
			if (a[k] > md[l])
			{a[k] = a[k] - md[l];}
			else break;
		}
		if (a[k] == 13)
		{cout << l + 1 << endl;}
	}
	return 0;
}