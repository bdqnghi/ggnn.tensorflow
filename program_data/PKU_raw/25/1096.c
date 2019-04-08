char a[1000] = {'0'};
int len;
void mul(char a[])
{
	len = strlen(a);
	int b[1000] = {0};
	for (int i = 0; i < len; i ++)
	{
		b[i] = 2 * (a[i] - '0');
	}
	for (int i = 0; i < len; i ++)
	{
		b[i + 1] = b[i + 1] + b[i] / 10;
		b[i] = b[i] % 10;
		a[i] = b[i] + '0';
		a[i + 1] = b[i + 1] + '0';
	}
}
int main()
{
	int n;
	cin >> n;
	a[0] = '2';
	a[1] = '\0';
	if (n == 0)
	{
		cout << "1" << endl;
	}
	else
	{
	for (int i = 1; i < n; i ++)
	{
		mul(a);
	}
	int i = len;
	while (a[i] == '0')
	{
		i --;
	}
	for (int j = i; j >= 0; j --)
	{
		cout << a[j];
	}
	cout << endl;
	}
	return 0;
}