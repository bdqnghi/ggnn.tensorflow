int main()
{
	int n, i, j, a[300], tempint, count = 1;
	double aver = 0, b[300], temp;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> a[i];
		aver += a[i];
	}
	aver = aver / n;
	for(i = 0; i < n; i++)
	{
		b[i] = fabs(aver - a[i]);
	}
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - 1 - i; j++)
		{
			if(b[j] < b[j+1])
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
				tempint = a[j];
				a[j] = a[j+1];
				a[j+1] = tempint;
			}
		}
	}
	i = 0;
	while(fabs(b[i] - b[i+1]) < 10e-6)
	{
		count++;
		i++;
	}
	cout << a[0];
	for(i = 1; i <= count - 1; i++)
	{
		cout << "," << a[i] ;
	}
	cout << endl;
	return 0;
}