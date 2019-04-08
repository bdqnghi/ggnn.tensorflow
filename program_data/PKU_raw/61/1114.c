
int f(int str[], int i)
{
	if (i == 0)
		return str[0];
	else if (i == 1)
		return str[1];
	else
	{
		str[i] = f(str, i-1) + f(str, i-2);
		return str[i];
	}
}
int main()
{
	int str[22] = {1, 1};
	int a, n;
	cin >> n;
	for ( ; n > 0; n--)
	{
		cin >> a;
		cout << f(str, a - 1) << endl;
	}

	return 0;
}