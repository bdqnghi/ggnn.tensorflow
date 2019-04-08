void main(void)
{
	int a, b, c, i, z;
	long x = 0;
	char n[65], p[65];
	scanf("%d%s%d", &a, n, &b);
	c = strlen(n);
	for(i = 0;i <= (c - 1);i++)
	{
		if(n[i] <= 'Z'&&n[i] >= 'A')
			n[i] = n[i] + 32;
	}
	i = 0;
	while(n[i] == '0'&&i <= c - 1)
		i = i + 1;
	if (i == c)
		printf("0");
	for(i = 0;i <= (c - 1);i++)
	{
		if(n[i] <= 'z'&&n[i] >= 'a')
			x = x * a + (n[i] - 'a' + 10);
		else
			x = x * a + (n[i] - '0');
	}
	i = 0;
	while(x > 0)
	{
		z = x % b;
		if (z > 9)
			p[i] = 'A' + z - 10;
		else
			p[i] = z + '0';
		i = i + 1;
		x = x / b;
	}
	i = i - 1;
	while(i >= 0)
	{
		printf("%c",p[i]);
		i = i - 1;
	}
}
