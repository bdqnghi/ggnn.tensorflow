int main()
{
	int n;
	cin >> n;
	if (n == 0)
		cout << n;
	else
		while(n > 0)
		{
			cout << n % 10;
			n = n / 10;
		}
	cout << endl;
	return 0;
}