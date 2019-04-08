
int F(int x)
{
	if (x == 2 || x == 1)
		return 1;
	return F(x - 1) + F(x - 2);
}

int main()
{
	int a, n;
	cin >> n;
	for(; n > 0; n--)
	{
		cin >> a;
		cout << F(a) << endl;
	}
}