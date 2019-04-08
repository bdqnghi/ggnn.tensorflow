int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;	double a[102];
		cin >> n;
		for(int i = 0; i < n; i++)
			cin >> a[i];
		double *p = a; p = &a[0];
		double ave = 0;	
		while( p < &a[n] )
		{
			ave += *p;
			p++;
		}
		ave /= n;
		double res = 0;
		p = &a[0];
		while( p < &a[n] )
		{
			res += (*p - ave) * (*p - ave);
			p++;
		}
		res /= n;
		res = sqrt(res);
		printf("%.5lf\n",res);
	}
	return 0;	
}