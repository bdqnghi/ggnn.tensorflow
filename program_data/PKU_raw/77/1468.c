char a[101], boy, girl;
int f(int n);
int main()
{
	int i;
	cin.getline(a, 101);
	boy = a[0];
	for (i = 0; a[i] != '\0'; i++)
		girl = a[i];
	f(0);
	return 0;
}
int f(int n)
{
	int i;
	for (i = n; a[i] != '\0'; i++)
	{
		if (a[i] == boy)
		{
			a[i] = '0';
			cout << i << " " << f(i + 1) << endl;
		}
		else if (a[i] == girl)
		{
			a[i] = '1';
			return i;
		}
	}
}