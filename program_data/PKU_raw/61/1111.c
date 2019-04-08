int a[100] = {0};
int f(int num)
{
	if (a[num] == 0)
		return (f(num - 1) + f (num - 2));
	else
		return a[num];
}
int main()
{
	a[1] = 1;
    a[2] = 1;
	int num, n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> num;
	    cout << f(num) << endl;
	}
	return 0;
}