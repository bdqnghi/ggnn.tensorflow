
int main()
{
	int N,i,j;
	int a[100] = {0};
	a[99] = 1;
	cin >> N;
	for ( i = 0 ; i < N; i ++)
	{
		for (j = 99; j >= 0; j --)
		{
			a[j] = a[j] * 2;
		}
		for ( j = 99; j >= 0; j --)
		{
			if (a[j] >= 10) 
			{
				a[j-1] = a[j-1] + 1;
				a[j] = a[j] % 10;
			}
		}
	}
	int b = 0;
	for (i = 0; i < 100; i ++)
	{
		if (!(a[i] == 0 && b == 0)) 
		{
			b ++;
			cout << a[i];
		}
	}
	cout << endl;
}