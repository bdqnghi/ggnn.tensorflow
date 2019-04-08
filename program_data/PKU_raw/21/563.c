int main()
{
	int n,a[300];
	double b[300];
	cin >> n;
	int i,begin=0;
	double average,sum=0,max,counter=0;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		sum=sum+a[i];
	}
	average=sum/n;
	for(i=0;i<n;i++)
	{
		if( a[i] > average)
		{
			b[i] = a[i] - average;
		}
		if( a[i] < average )
		{
			b[i] = average - a[i];
		}
	}
	max= b[0];
	for(i=1;i<n;i++)
	{
		if( b[i] > max)
		{
			max = b[i];
			begin = i;
		}
	}
	for (i=0;i<n;i++)
	{
		if( fabs(b[i] - max) < 1e-5)
		{
			counter++;
		}
	}
	if(counter >= 2)
	{
		cout << a[begin];
		for( i= begin+1;i<n;i++)
		{
			if( fabs(b[i] - max) < 1e-5)
			{
				cout << "," << a[i];
			}
		}
	}
	else cout << a[begin] << endl;
	return 0;
}