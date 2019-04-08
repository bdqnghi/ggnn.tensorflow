void add(int []);
int main()
{
	int n, a[100] = {0}, i, j;
	a[0] = 1;
	cin >> n;
	for(i = 0; i < n; i++)
		add(a);
	i = 99;
	while(a[i] == 0)
		i--;
	for(j = i; j >= 0; j--)
		cout << a[j];
	cout << endl;
    return 0;
}
void add(int a[])
{
	int i = 99, j;
	while(a[i] != 0)
		i--;
	for(j = i; j >= 0; j--)
	{
		a[j] = 2 * a[j];
		if(a[j] >= 10)
		{
			a[j + 1]++;
			a[j] -= 10;
		}
	}
}