void run(int base1, char a[50], int base2)
{
	char d[36] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int len = strlen(a);
	int b[50] = {0}, c[50] = {0}, s = 0, i =0;
	for (i = 0; i < len; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			b[i] = a[i] - 55;
		else
		{
			if (a[i] >= 'a' && a[i] <= 'z')
				b[i] = a[i] - 87;
			else
				b[i] = a[i] - '0';
		}
		s += b[i] * pow(base1 + 0.0,len - i - 1);
	}
	i = 0;
	while (s > 0)
	{
		c[i++] = s % base2;
		s = s / base2;
	}
	if (i == 0)
	{cout << "0";}
	else
	{
		i--;
		for (; i >= 0; i--)
			cout << d[c[i]];
	}
}
int main()
{
	int base1, base2, i;
	char a[50];
	for (i = 0; i < 50; i++)
	{
		a[i] = '\0';
	}
	cin >> base1 >> a >> base2;
	run (base1,a,base2);
	return 0;
}