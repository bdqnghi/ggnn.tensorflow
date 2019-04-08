
int count = 0, n = 0;

int line(char b[], int y[])
{
	int f, len;
	len = strlen(b);
	if (n == 0)
	{
		cout << y[0] - 1 << " " << y[0] << '\n';
		b[y[0]] = '0';
		b[y[0]-1] = '0';
	}
	else
	{
		if (y[n-1] + 1 < y[n])
		{
			for (f = y[n] - 1; b[f] != '0'; f--)
			{
				cout << f << " " << y[n] << '\n';
				b[f] = '0';
				b[y[n]] = '0';
				break;
			}
		}
		else 
		{
			f= y[n] - 1;
			do
			{ 
				if (b[f] == '0')
					f--;

				else
				{
					cout << f << " " << y[n] << '\n';
					b[f] = '0';
					b[y[n]] = '0';
					break;
				}

			}while (1);
		}
	}
	n++;
	if (n < len / 2)
		line(b, y);
	else
		return 0;
}

int main()
{
	char a[100];
	int i, j = 0, x[100];
	cin >> a;
	for (i = 0;a[i] != 0;i++ )
	{
		if (a[i] != a[0])
		{
			x[j] = i;
			j++;
		}
	}
	line(a, x);
	return 0;
}