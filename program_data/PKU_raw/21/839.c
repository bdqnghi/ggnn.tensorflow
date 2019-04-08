int main()
{
	int n, a[320]={0}, i, m;
	float b[320], k, max;
	m=1;
	k=0;
	max=0;
	cin >> n;
	for(i=0; i<n; i++)
	{
		cin >> a[i];
		k=(k*i+a[i])/(i+1);
	}
	for(i=0; i<n; i++)
	{
		b[i]=fabs(a[i]-k);
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	for(i=0; i<n; i++)
	{
		if(fabs(b[i]-max)<=1e-5)
		{
			if(m==1)
			{
				cout << a[i];
				m=0;
			}
			else
				cout << "," << a[i];
		}
	}

	return 0;
}