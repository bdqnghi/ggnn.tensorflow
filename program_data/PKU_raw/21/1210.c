int main()
{
	int n,i,num_min=1,num_max=1;
	float max=-10000,min=10000,a[301],sum=0,ave;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
			num_max=1;
		}
		else if(a[i]==max)
		{
			num_max++;
		}
		if(min>a[i])
		{
			min=a[i];
			num_min=1;
		}
		else if(min==a[i])
		{
			num_min++;
		}
		sum+=a[i];
	}
	ave=sum/n;
	if(ave==(max+min)/2)
	{
		for(int t=1;t<=num_min;t++)
			cout<<min<<",";
		for(int t=1;t<num_max;t++)
			cout<<max<<",";
		cout<<max;
	}
	else if(ave<(max+min)/2)
	{
		for(int t=1;t<num_max;t++)
			cout<<max<<",";
		cout<<max;
	}
	else if(ave>(max+min)/2)
	{
		for(int t=1;t<num_min;t++)
			cout<<min<<",";
		cout<<min;
	}
	
	return 0;
}