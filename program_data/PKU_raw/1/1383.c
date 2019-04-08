
void factor(int a, int k);
int sum = 0;
int main()
{
	int n, a, i = 0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		factor(a, 2);
		cout << sum + 1 << endl;
		sum = 0;
	}
	return 0;
}

void factor(int a, int k)
{
	int b, j;
	b = (int)sqrt((double)a);
	for (j = k; j <= b; j++)
	{
		if (a % j == 0)
		{
			sum++;
			factor(a / j, j);
		}
	}
	j = k;
}



