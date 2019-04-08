// ?????.cpp : Defines the entry point for the console application.
//



int main()
{
	int x[1000];
	int y[1000];
	char a;
	int sum = 0;
	int len = 0;
	int n[1001] = {0};
	int i = 0;
	int t = 0;
	int max = 0;

	for( i = 1;;i++ )
	{
		cin >> x[i];
		a = cin.get();

		if( a == '\n')
			break;
	}

	for( i = 1;;i++ )
	{
		cin >> y[i];
		a = cin.get();

		if( a == '\n')
			break;

	}
	sum = i;


	for( t = 1;t <= 1000;t++ )
		for( i = 0;i <= sum;i++ )
		{
			if( t >= x[i] && t < y[i] )
				n[t]++;
		}

	max = 1;

	for( t = 1;t <= 1000;t++ )
	{
		if( n[t] > n[max] )
			max = t;
	}

	cout << sum << " " << n[max];

	return 0;
}

