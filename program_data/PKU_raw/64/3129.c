int main()
{
	int n;
	double x[11], y[11], z[11], s[11][11];
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> x[i] >> y[i] >> z[i];

	for(int i = 1; i <= n; i++)
	{
		for(int j = i + 1; j <= n; j++)
		{
			s[i][j] = (x[i]-x[j])*(x[i]- x[j]) + (y[i]-y[j])*(y[i]-y[j]) + (z[i]-z[j])*(z[i]-z[j]);
			s[i][j] = sqrt(s[i][j]);
		}
	}

	for(int k = 1; k <= n * (n-1) / 2; k++)
	{
		double max = 0;
		int t1 = 0, t2 = 0;
		for(int i = 1; i <= n; i++)
		{
			for(int j = i + 1; j <= n; j++)
			{
				if(s[i][j] > max )
				{
//					cout << i<<"   "<<j<<"  :  "<<s[i][j] << " &   "<<max <<endl;
					max = s[i][j];
					t1 = i;
					t2 = j;
				}
			}
		}
		cout << "(" << x[t1] << "," << y[t1] << "," << z[t1] << ")-(" << x[t2] << "," << y[t2] << "," << z[t2] << ")=" ;
		printf( "%.2lf\n", s[t1][t2]);
		s[t1][t2] = 0;

	}
	return 0;
}