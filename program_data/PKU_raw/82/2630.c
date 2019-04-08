int main()
{
	int a[100],b[100],i,n,max=0,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		{
			count++;
			if(count>max)
				max=count;
			continue;
		}
		count=0;
	}
	cout<<max;
	return 0;
}