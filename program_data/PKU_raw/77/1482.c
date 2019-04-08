
char b, g, a[100];
int len;

int paidui(int n)
{
	for (int i = n; i < len; i++)
	{
		if (a[i] == '*') continue;
		if (a[i] == b)
		{
			a[i] = '*';
			int k = paidui(i + 1);
			cout << i << ' ' << k << endl;
		}
		else if (a[i] == g)
		{
			a[i] = '*';
			return i;
		}
	}
}

int main()
{
	cin.getline(a, 100);
	len = strlen(a);
	b = a[0];
	g = a[len - 1];
	paidui(0);

	return 0;
}