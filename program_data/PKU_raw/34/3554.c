int solve(int a);

int main()
{
	int x;
	cin >> x;
	solve(x);

return 0;
}

int solve(int a)
{
	if (a == 1)
	{
		cout << "End";
		return 0;
	}
	if (a % 2 == 1)
	{
		cout << a << "*3+1=" << 3 * a + 1 << endl;
		a = 3 * a + 1;
		return solve(a);
	}
	cout << a << "/2=" << a / 2 << endl;
	a = a / 2;
	return solve(a);
}