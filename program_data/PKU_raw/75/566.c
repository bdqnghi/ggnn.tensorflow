//********************************
//*????????   **
//*????? 1300012707 **
//*???2013.10.30  **
//********************************
int main()
{
	int a[1001], b[1001], num, max, t;
	num = 1;
	cin >> a[1];
	while ( cin.get() == ',')
	{
		num = num + 1;
		cin >> a[num];
	}
	for ( int i = 1; i <= num; i = i + 1)
	{
		cin >> b[i];
		cin.get();
	}
	max = 0;
	for ( int i = 0; i < 1000; i = i + 1)
	{
		t = 0;
		for ( int j = 1; j <= num; j = j + 1)
		{
			if ( (a[j] <= i) && (b[j] > i))
			{
				t = t + 1;
			}
		}
		if ( t > max)
		{
			max = t;
		}
	}
	cout << num << " " << max <<endl;
	return 0;
}