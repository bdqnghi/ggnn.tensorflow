// ????? ?? 1000062708
int main()
{
	int i, j, n1, n2, t, m = 1, z, x[1000] = {0}, y[1000] = {0};
	char a[100000], b[100000];
	cin.getline(a,100000);
	cin.getline(b,100000);
	n1 = strlen(a);
	n2 = strlen(b);
	i = 0;
	for(j = 0;j < n1;j++)
	{
		if(a[j] != ',')
			x[i] = x[i] * 10 + (a[j] - '0');
		else
			i++;
	}
	i = 0;
	for(j = 0;j < n2;j++)
	{
		if(b[j] != ',')
			y[i] = y[i] * 10 + (b[j] - '0');
		else
			i++;
	}
	t = i + 1;
	for(i = 0;i <= 1000;i++)
	{ 
		z = 0;
		for(j = 0;j < t;j++)
		{
		
			if(x[j] <= i && y[j] >= i + 1)
				z++;
		}
		if(z > m)
			m = z;

	}
	cout << t << " " << m << endl;
	return 0;
}

