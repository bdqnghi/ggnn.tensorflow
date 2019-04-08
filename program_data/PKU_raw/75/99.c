int main()
{
	int f[15000] = {0};
	int l[15000] = {0};
	int x[50000] = {0};
	char a[30000], b[30000];
	scanf("%s", a);
	scanf("%s", b);
	int along, blong, i = 0, u = 0, v = 0, max = 0;
	int num[30000] = {0};
	along = strlen(a);
	blong = strlen(b);
	while (u <= along - 1)
	{
		for (v = u; (a[v] != ',') && (a[v] != '\0'); v++)
		{
			num[i] = a[v] - '0';
			u++;
			f[i] = f[i] * 10 + num[i];
		}
		i = i + 1;
		u = u + 1;
	}
	u = 0;
	v = 0;
	i = 0;
	while (u <= blong - 1)
	{
		for (v = u; (b[v] != ',') && (b[v] != '\0'); v++)
		{
			num[i] = b[v] - '0';
			u++;
			l[i] = l[i] * 10 + num[i];
		}
		u++;
		i++;
	}
	int vmax = 0;
	for (u = 0; u <= i - 1; u++)
	{
		for (v = f[u]; v < l[u]; v++)
		{
			x[v] = x[v] + 1;
			if (vmax <= v)
			{
				vmax = v;
			}
		}
	}
	for (u = 0; u <= vmax + 1; u++)
	{
		if (max <= x[u])
		{
			max = x[u];
		}
	}
	cout << i << " " << max << endl;
	return 0;
}
