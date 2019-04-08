//???2010?11?6?
//???1000010586_???
//?????????

int main()
{
	int N , m = 0 , i , j , k , num , t , l;
	int a[10000];
	cin >> N;
	for ( i = 0 ; i <= N - 1 ; i++ )
	{
		cin >> num;
		if ( num % 2 == 1 )
		{
			a[m] = num;
			m++;
		}
	}
	for ( j = 0 ; j <= m - 1 ; j++ )
	{
		for ( k = j + 1 ; k <= m - 1 ; k++ )
		{
			if ( a[j] > a[k] )
			{
				t = a[j]; a[j] = a[k] ; a[k] = t;
			}
			else continue;
		}
	}
	cout << a[0];
	for ( l = 1 ; l <= m - 1 ; l++)
	{
		cout << "," << a[l];
	}
	return 0;
}

		


