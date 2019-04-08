
int n;
int ji(int n)
{
	n = n * 3 + 1;
	cout << (n - 1) / 3 << "*3+1=" << n << endl;
	return n;
}

int ou(int n)
{
	n = n / 2;
	//cout << 'x' << n << endl;
	cout << n * 2 << "/2=" << n << endl;
	//cout << 'y' << n << endl;
	return n;
}

int main()
{
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0)
			n = ou(n);
		if (n == 1)
			break;
		if (n % 2 == 1)
			n = ji(n);
	}
	cout << "End" << endl;
	return 0;
}