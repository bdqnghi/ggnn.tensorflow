void paixu()
{
	int a[100], b[100], sizea, sizeb, i, j, t;
	cin >> sizea >> sizeb;
	for (i = 1; i <= sizea; i++)
		cin >> a[i];
	for (i = 1; i <= sizeb; i++)
		cin >> b[i];
	for (i = sizea; i >= 1; i--)
	for (j = 1; j < i; j++)
	{
		if (a[j] > a[j + 1])
		{
			t = a[j];
			a[j] = a[j + 1];
			a[j + 1] = t;
		}
	}
	for (i = sizeb; i >= 1; i--)
	for (j = 1; j < i; j++)
	{
		if (b[j] > b[j + 1])
		{
			t = b[j];
			b[j] = b[j + 1];
			b[j + 1] = t;
		}
	}
	for (i = 1; i <= sizea; i++)
		cout << a[i] << " ";
	for (i = 1; i <= sizeb; i++)
	{
		cout << b[i];
		if (i < sizeb)
			cout << " ";
		else
			cout << endl;
	}
}
int main()
{
	paixu();
	return 0;
}
