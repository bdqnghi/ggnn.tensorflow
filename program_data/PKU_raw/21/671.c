int main()
{
	int n,a[300],i,max=0,min=0;
	float ave=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		cin.get();
		ave=ave+a[i];
	}
	ave=ave/n;
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	if((max-ave)>(ave-min))
		cout<<max;
	if((max-ave)<(ave-min))
		cout<<min;
	if((max-ave)==ave-min)
		cout<<min<<","<<max;
	return 0;
}
