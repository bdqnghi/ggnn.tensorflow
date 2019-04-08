int main()
{
	int i, num, j, length = 0, pos = 0;
	char a[1000];
	a[0] = 0;
	cin >> a + 1;
	for (i = 1; a[i] !=0; i++)
	{
		if (a[i] > 96 && a[i] < 123)
		{
			a[i] = a[i] - 32;
		}
	}
	for (i = 2; a[i] !='\0'; i++)
	{
		if (a[i] != a[i-1])
		{
			length = i - 1 - pos;
			pos = i - 1;
			cout << "(" << a[i-1] << "," << length <<")";
		}
	}
	cout << "(" << a[i-1] << "," << i - 1 -pos  <<")";
	return 0;
}