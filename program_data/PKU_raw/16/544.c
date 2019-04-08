
int main()
{
	int n; 
	cin >> n; 
	int mod;

	if (n == 0)
	{
		cout << 0 << endl;
	}
	else
	{

		while (n != 0)
		{
			mod = n % 10;
			cout << mod;
			n /= 10;
		}
	}

	cout << endl;

	return 0;
}