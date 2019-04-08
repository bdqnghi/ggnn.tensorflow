int main()
{
	int n, a[100000] = {0}, b[100000] = {0},c[10000] = {0}, i = 0, flag1 = 0, j = 0, flag2 = 0;
	int *p = NULL, *q = NULL;
	cin >> n;
	cin >> a[0] >> b[0];
	while ((a[i] != 0) || (b[i] != 0))
	{
		i++;
		cin >> a[i] >> b[i];
	}
	for (p = &b[0], q = &b[i]; ; p++)
	{
		if (p == q)
			break;
		c[*p]++;
	}
	for (p = &c[0]; ; p++, j++)
	{
		if (*p == n - 1)
		{
			flag1 = 1;
			break;
		}
		if (j == n)
			break;
	}
	if (flag1)
	{
		for (p = &a[0], q = &a[i]; p != q; p++)
		{
			if (*p == j)
			{
				flag2 = 1;
				break;
			}
		}
	}
	if ((flag2 == 0)&&(flag1 == 1))
		cout << j;
	else 
		cout << "NOT FOUND";
	return 0;
}

	

