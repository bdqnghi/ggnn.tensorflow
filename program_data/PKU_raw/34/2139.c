
int n;

void oddnum(int a)
{
	int b;
		b = a * 3 + 1;
		n = b;
	cout << a << '*' << 3 << '+' << 1 << '=' << b << endl;
}

void evennum(int a)
{
	int b;
	b = a / 2;
	n = b;
	cout << a << '/' << 2 << '=' << b <<endl;
}

int main()
{
	cin >> n;
	if (n == 1)
		cout << "End";
	else
	{
		while (n != 1)
		{
			if (n % 2 == 0)
				evennum(n);
			else
				oddnum(n);
		}
		cout << "End";
	}
	return 0;
}