
int m, n;
int a[1000];
int b[1000];

void input()
{
	int i;

	cin >> m >> n;

	for(i = 0; i < m; i ++)
		cin >> a[i];

	for(i = 0; i < n; i ++)
		cin >> b[i];

	return;
}

void paixu()
{
	int i, j;
	int p;

	for(i = 0; i < m - 1; i ++)
	for(j = 0; j < m - 1 - i; j ++)
		if(a[j] > a[j + 1])
		{
			p = a[j];
			a[j] = a[j + 1];
			a[j + 1] = p;
		}

	for(i = 0; i < n - 1; i ++)
	for(j = 0; j < n - 1 - i; j ++)
		if(b[j] > b[j + 1])
		{
			p = b[j];
			b[j] = b[j + 1];
			b[j + 1] = p;
		}

	return;
}

void output()
{
	int i;

	cout << a[0];

	for(i = 1; i < m; i ++)
		cout << " " << a[i];
	for(i = 0; i < n; i ++)
		cout << " " << b[i];

	return;
}

int main()
{
	input();
	paixu();
	output();

	return 0;
}
