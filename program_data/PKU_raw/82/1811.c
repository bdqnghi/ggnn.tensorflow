int main()
{
	int bloodpressuremax[101];
	int bloodpressuremin[101];
	int lastingtime[101];
	lastingtime[1] = 0;
	int n , a = 1 ;

	cin >> n;

	for (int i=1 ; i <=n ; i++)
	{
		cin >> bloodpressuremax[i];
		cin >> bloodpressuremin[i];
		if (bloodpressuremax[i] <= 140 && bloodpressuremax[i] >= 90 && bloodpressuremin[i] <= 90 && bloodpressuremin[i] >= 60)
		{
			lastingtime[a] = lastingtime[a] + 1;
		}
		else
		{
			a = a + 1;
			lastingtime[a] = 0;
		}
	}

	int maxtime = 0;
	for (int j = 1; j <= a; j++)
		if (maxtime <= lastingtime[j])
			maxtime = lastingtime[j];

	cout << maxtime << endl;
	return 0;
}