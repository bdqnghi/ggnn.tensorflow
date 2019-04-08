int main()
{
	int n ;
	cin >> n ;
	double a[101] , b[101] , c[101] , d[101] ;
	for (int i = 1 ; i <= n ; i++)
	{
		cin >> a[i] >> b[i] >> c[i] ;
		d[i] = b[i] * b[i] - 4 * a[i] * c[i];
	}
	for (int j = 1 ; j <= n ; j++)
	{
		if(b[j]==0)
		{
			if (d[j]==0)
			cout << fixed << setprecision(5) << "x1=x2=" << b[j]/(2.0 * a[j]) << endl ;
			else
			{
				if(d[j]>0)
				    cout << fixed << setprecision(5) << "x1=" << (-b[j] + sqrt(d[j]))/(2.0 * a[j]) << ";x2=" << (-b[j] - sqrt(d[j]))/(2.0 * a[j]) <<endl;
			    else
				    cout << fixed << setprecision(5) << "x1=" << b[j]/(2.0 * a[j]) << "+" << sqrt(-d[j])/(2.0 * a[j]) << "i;x2=" << b[j]/(2.0 * a[j]) << "-" << sqrt(-d[j])/(2.0 * a[j]) << "i" <<endl ;
			}
		}
		else
		{
			if (d[j]==0)
			    cout << fixed << setprecision(5) << "x1=x2=" << -b[j]/(2.0 * a[j]) << endl ;
		    else
			{
				if(d[j]>0)
				    cout << fixed << setprecision(5) << "x1=" << (-b[j] + sqrt(d[j]))/(2.0 * a[j]) << ";x2=" << (-b[j] - sqrt(d[j]))/(2.0 * a[j]) <<endl;
			    else
					cout << fixed << setprecision(5) << "x1=" << -b[j]/(2.0 * a[j]) << "+" << sqrt(-d[j])/(2.0 * a[j]) << "i;x2=" << -b[j]/(2.0 * a[j]) << "-" << sqrt(-d[j])/(2.0 * a[j]) << "i" <<endl ;
			}
		}
	}
	
	return 0;
}