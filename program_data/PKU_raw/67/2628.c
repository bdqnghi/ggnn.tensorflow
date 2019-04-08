// homework : ?????
// name     : ???
// date     : 9.29


int main()
{
	double n, a[3], b[3];
	cin >> n >> a[0] >> a[1];
	a[2] = a[1] / a[0];
	for( int i = 1; i < n; i++)
	{
		cin >> b[0] >> b[1];
		b[2] = b[1] / b[0];
		if( b[2] - a[2] > 0.05 ) 
			cout << "better" << endl;
		if( a[2] - b[2] > 0.05 )
			cout << "worse" << endl;
		if( abs(a[2] - b[2]) <= 0.05 )
			cout << "same" << endl;
	}


	return 0;
}