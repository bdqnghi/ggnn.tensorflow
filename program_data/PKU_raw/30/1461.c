
int seven(int n)
{
	int i, s= 0;
	for (i = 1; i <= n; i++)
	{
		if (i % 10 != 7 && i / 10 != 7 && i % 7 != 0)
		{
			s += i * i;
		}
	}
	return s;
}

int main()
{
	int n;
	cin >> n;
	cout << seven(n) << endl;
	return 0;
}
