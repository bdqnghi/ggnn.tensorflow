int main()
{
	int tmax=0;
	int a[3][1001];
	cin>>a[1][1];
	int tmin=a[1][1];
	int sum=1;
	while(cin.get()==',')
	{
		cin>>a[1][sum+1];
		if(a[1][sum+1]<tmin)
			tmin=a[1][sum+1];
		sum++;
	}
	for(int i=1;i<sum;i++)
	{
		cin>>a[2][i];
		if(a[2][i]>tmax)
			tmax=a[2][i];
		getchar();
	}
	cin>>a[2][sum];
	if(a[2][sum]>tmax)
		tmax=a[2][sum];
	cout<<sum<<" ";
	int ren=0;
	for(int t=tmin;t<=tmax;t++)
	{
		int temp=0;
		for(int i=1;i<=sum;i++)
		{
			if(t>=a[1][i]&&t<a[2][i])
			{
				temp++;
			}
		}
		if(ren<temp)
			ren=temp;
	}
	cout<<ren;
	
	return 0;
}

