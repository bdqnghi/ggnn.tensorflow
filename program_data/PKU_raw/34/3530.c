
int f1(int a)
{
	int b;
	b = a / 2;
	cout << a << "/2=" << b << endl;
	a = b;
	return a;
}

int f2(int a)
{
	int b;
	b = a * 3 + 1;
	cout << a << "*3+1=" << b << endl;
	a = b;
	return a;
}

int main()
{
	int a;
	cin >> a;
	while (a != 1)
	{
		if ((a%2) == 0)
		{
			a = f1(a);
		}
		else
		{
			a = f2(a);
		}
	}
	cout << "End" << endl;
	cin.get();
	cin.get();
	return 0;
}