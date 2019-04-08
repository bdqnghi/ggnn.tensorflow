void exponent(int a[], int n);
int main()
{
	int n;
	int a[200];
	int i;
	memset(a, 0, sizeof(a));
	a[0] = 1;
	cin >> n;
	exponent(a, n);
	for(i = 199; a[i] == 0; i--);
	for(;i >= 0;i--)
	{
		cout << a[i];
	}
	return 0;
}
void exponent(int a[], int n)
{
	if(n == 0)
		return;
	else
	{
		int i, k;
		for(i = 199; a[i] == 0; i--);
		for(k = 0; k <= i; k++)
		{
			a[k] = a[k] * 2;
		}
		for(k = 0; k <= i; k++)
		{
			a[k + 1] = a[k] / 10 + a[k + 1];
			a[k] = a[k] % 10;
		}
		exponent(a, n - 1);
		return;

	}
}
