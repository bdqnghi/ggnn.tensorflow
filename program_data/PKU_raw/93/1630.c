int main()
{
	int n, p = 0, j = 0, k = 0;
	while (cin >> n)
	{
		if (n % 3 == 0)
		{
			cout << 3;
			p = 1;
		}
		if (n % 5 == 0)
		{
			if (p == 0)
				cout << 5;
			else
				cout << " " << 5;
			j = 1;
		}
		if (n % 7 == 0)
		{
			if ((p == 1) || (j == 1))
				cout << " " << 7;
			else
				cout << 7;
			k = 1;
		}
		if ((p == 0) && (j == 0) && (k==0))
			cout << "n";
		cout << endl;
	}
	return 0;
}