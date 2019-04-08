int main()
{
	int num;
	cin >> num;
	for(int i = 0; i < num; i++)
	{
		int n;
		cin >> n;
		double a[1001], sum = 0, ave;
		double *p;
		for(p = a; p < a+n; p++)
		{
			cin >> *p;
			sum = sum + *p;
		}
		ave = sum / n;
		double summ = 0;
		for(p = a; p < a+n; p++)
			summ = summ + ( *p - ave ) * ( *p - ave );
		summ = summ / n;
		summ = sqrt( summ );
		printf( "%.5lf\n", summ );	
	}
	return 0;
}