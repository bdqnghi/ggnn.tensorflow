int main()
{
	char a, b;
	cin >> a;
	b = a;
	cout << a;
	while (cin.get(a))
	{
		if (a != ' ' || (a == ' ' && b != ' '))
		{
			cout << a;
			b = a;
		}
	}
	return 0;
}