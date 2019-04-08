int Apple(int a, int p)
{
	int sum = 0;
	if (a <= 1 || p == 1)
		return 1;
	if (a < p)
		return Apple(a, a);
	for (int i = 1; i <= p; i++)
		sum += Apple(a - i, i);
	return sum;
}
int main()
{
	int t, a, p;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> p;
		cout << Apple(a, p) << endl;
	}
	return 0;
}