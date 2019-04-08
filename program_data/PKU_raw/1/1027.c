
int num = 1, i, factor;

void f(int factor, int x)
{
	for (; factor * factor <= x; factor++)
	{
		if (x % factor == 0)
		{
			num++;
			f(factor, x / factor);
		}
	}
}

int main()
{
	int a, n;
	cin >> n;
	while(n--)
	{
		cin >> a;
		f(2, a);
		cout << num << endl;
		num = 1;
	}

	return 0;
}
