
int SUSHU (int x)
{
	int d = 2, none = 1, result = 0;
	while (d * d <= x)
	{
		if (x % d == 0)
		{
			none = 0;
			break;
		}
		else
			d += 1;
	}
	if (none == 1)
		result = 1;
	return result;
}

int main()
{
	int m, a = 3, b;
	cin >> m;
	while (2 * a <= m)
	{
		b = m - a;
		if ((b % 2 != 0) && (SUSHU(a) == 1) && (SUSHU(b) == 1))
		{
			cout << a << " " << b << endl;
		}
		a += 2;
	}
}