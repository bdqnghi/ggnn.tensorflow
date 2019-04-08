int main()
{
	char a[100], b[100];
	int i, m, k, l = 0, j, flag, x, y;
	i = 0;
	flag = 0;
	cin.getline(a,100);
    j = strlen(a);
	if (j >= 2)
	{
		if (j >= 3)
		{
			while (i < j)
			{
				m = l * 10 + a[i] - '0';
				b[i] = m / 13 + '0';
				l = m % 13;
				i = i + 1;
			}
			for (k = 0; k < i; k ++)
			{
				if ((b[k] != '0') || (flag == 1))
				{
					cout << b[k];
					flag = 1;
				}
			}
			cout << endl << l;
		}
		else 
		{
			m = ((a[0] - '0') * 10 + a[1] - '0');
			x = m / 13;
			y = m % 13;
			cout << x << endl << y;
		}
	}
	else
		cout << "0" << endl << (a[0] - '0');
	return 0;
}
		 