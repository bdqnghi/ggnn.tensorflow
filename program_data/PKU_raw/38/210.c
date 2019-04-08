

int main()
{
	int counttest;
	int n;
	int i, j;
	double average;
	double sum;
	double x[200];
	double *p;

	cin >> counttest;

	while(counttest --)
	{
		cin >> n;

		average = 0;
		sum = 0;

		p = x;

		for(i = 0; i < n; i ++)
		{
			cin >> *p;
			average += *p / n;
			p ++;
		}

		p = x;

		for(i = 0; i < n; i ++)
		{
			sum += (*p - average) * (*p - average);
			p ++;
		}

		sum = sqrt(sum / n);

		cout << fixed << setprecision(5);
		cout << sum << endl;
	}
	
}