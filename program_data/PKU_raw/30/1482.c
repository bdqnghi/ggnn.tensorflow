int main ()
{
	int n, i, x, sum = 0;
	cin >> n;
	for ( i = 1; i <= n; i += 1)
	{ x = i / 10;
	  if ( i % 7 == 0 || i % 10 == 7 )
	     sum = sum;
	    else if ( x == 7 )
		   sum = sum;
		else sum += i * i ;
	}
	cout << sum << endl;
	return 0;
}

