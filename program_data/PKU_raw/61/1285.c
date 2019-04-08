int shulie(int);
int num[100] = {0};

int main()
{
	int a, n, k;
	cin >> n;
	for (k = 0; k < n; k++)
	{
		cin >> a;
		cout << shulie(a) << endl;
	}
	return 0;
}
int shulie(int a)
{
	if (a == 1 || a == 2)
		return 1;
	num[a] = shulie(a -1) + shulie(a - 2);
	return num[a];
}
