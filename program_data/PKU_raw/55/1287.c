long f1(char n[500], int a, int l)
{
	long m;
	int i, j, k, c[500] = {0};
	m = 0;
	k = 0;
    for (i = l - 1; i >= 0; i--)
		if (n[i] <= '9' && n[i] >= '0')
			c[i] = n[i] - '0';
		else
		    if (n[i] <= 'Z' && n[i] >= 'A')
                c[i] = n[i] - 'A' + 10;
			else
		        if (n[i] <= 'z' && n[i] >= 'a')
                    c[i] = n[i] - 'a' + 10;
	for (i = l - 1; i >= 0; i--)
	{
		k = c[i];
		for (j = 1; j < l - i; j++)
			k = k * a;
        m = m + k;
	}
	return m;
}
void f2(long m, int b)
{
	int a[500] = {0}, i = 0, j;
	char c[500];
	do
	{
		i++;
		a[i] = m % b;
		m = m / b;
	}while(m != 0);
    for (j = 1; j <= i; j++)
		if (a[j] <= 9 && a[j] >= 0)
			c[j] = '0' + a[j];
		else
			c[j] = a[j] + 'A' - 10;
    for (j = i ; j > 0; j--)
		cout << c[j];
}
int main()
{
	int a, b, l;
	long m;
	char n[500];
	cin >> a >> n >> b;
	l = strlen(n);
	m = f1(n, a, l);
    f2(m, b);
	return 0;
}
