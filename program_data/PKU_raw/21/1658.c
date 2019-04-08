int main()
{
	int n,i,max;
	unsigned int a[300];
	float ave,sum=0.0,x=0.0;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	ave=sum/n;
	for (i=0;i<n;i++)
		if (fabs(a[i]-ave)>x)
		{
			x=fabs(a[i]-ave);
			max=i;
		}
	cout<<a[max];
	for (i=max+1;i<n;i++)
		if (fabs(a[i]-ave)==x)
			cout<<","<<a[i];
	return 0;
}
