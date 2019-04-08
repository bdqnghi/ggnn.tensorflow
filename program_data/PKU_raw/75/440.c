void count(int n, int x[], int y[], int a[]);
int findmax(int a[]);
int main()
{
	int x[1000],y[1000],a[1001] = {0}, n = 0;
	int i;
	for(i = 0; ; i++)
	{
		cin >> x[i];
		n++;
		if(cin.get() != ',')
			break;
	}
	
	for(i = 0; i < n; i++)
	{
		cin >> y[i];
		cin.get();
	}

	count(n, x, y, a);
	cout << n << " " << findmax(a);
	return 0;
}

void count(int n, int x[], int y[], int a[])
{
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = x[i]; j < y[i]; j++)
			a[j]++;
	}
}

int findmax(int a[])
{
	int i;
	int	max = 0;
	for(i = 1; i <= 1000; i++ )
	{
		if(max < a[i])
			max = a[i];
	}

	return max;


}
