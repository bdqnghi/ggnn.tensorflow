void check(int);
int main()
{
	int i, p, n;
	cin >> n;
	check(n);
	cout << "End" << endl;
	return 0;
}
void check(int n)
{
	if(n == 1)
		return;
	else
	{
		if(n % 2 == 0)
		{
			cout << n << "/" << 2 << "=" << n / 2 << endl;
			n /= 2;
		}
		else
		{
			cout << n << "*" << 3 << "+" << 1 << "=" << 3 * n + 1 << endl;
			n = 3 * n + 1;
		}
		check(n);
	}
}

