int a[500] = {0};
void f(int c)
{
	int i;
	if (c == 0)
	{
		return ;
	}
	if (c == 1)
	{
		for (i = 0 ; i <= 499 ; i++)
		{
			a[i] *= 2;
		}
		for (i = 499 ; i >= 1 ; i--)
		{
			a[i - 1] += a[i] / 10;
			a[i] %= 10;
		}
		a[0] %= 10;
		return ;
	}
	if (c % 2 == 0)
	{
		f(c / 2);
		f(c / 2);
		return ;
	}
	else
	{
		f(1);
		f(c / 2);
		f(c / 2);
		return ;
	}
}
int main()
{
	int n , i , flag = 0;
	cin >> n;
	a[499] = 1;
	f(n);
	for (i = 0 ; i <= 499 ; i++)
	{
		if (flag == 0)
		{
			if (a[i] != 0)
			{
				flag = 1;
				cout << a[i];
			}
		}
		else
		{
			cout << a[i];
		}
	}
	cout << endl;
	return 0;
}