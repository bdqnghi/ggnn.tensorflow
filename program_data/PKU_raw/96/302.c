int main()
{
	char a[100];
	char b[100] = {0};
	int m, n, i, k = 0;
	cin.getline(a,100);
	if (a[1] == '\0')
	{
		cout << 0 <<endl;
		cout << a[0];
	}
	else 
	{
		n = (a[0] -48) * 10 + (a[1] - 48);
		if (n < 13)
			k = 1;
		b[0] = n / 13 + 48;
		m = n % 13;
		for (i = 2; a[i] != '\0'; i++)
		{
			n = m * 10 + (a[i] - 48);
			if (n >= 13)
			{
				b[i - 1] = n / 13 + 48;
				m = n % 13;
			}
			else
			{
				b[i-1] = 48;
				m = n;
			}
		}
		if (b[1] != 0)
		{
			cout << b + k << endl;
			cout << m;
		}
		else
		{
			cout << b[0] << endl;
			cout << m;
		}
	}
	return 0;
}