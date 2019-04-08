
int f(int a)
{
	if (a % 2 == 0)
		return a / 2;
	return a * 3 + 1;
}

int main()
{
	int a;
	cin >> a;
	while (a != 1)
	{
		if (a % 2 == 0)
			cout << a << "/2=" << f(a) << endl;
		else
			cout << a << "*3+1=" << f(a) << endl;
		a = f(a);
	}
	if (a == 1)
		cout << "End" << endl;
	return 0;
}