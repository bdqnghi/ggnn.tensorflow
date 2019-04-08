int main()
{
	int n;
	cin>>n;
	for(int s=1;s<=n;s++)
	{
		int m=0;
		cin>>m;
		int a[100]={0};
		int sum=60;
		int totaltime=0;
		for(int i=1;i<=m;i++)
		{
			cin>>a[i];
		if(totaltime+a[i]-a[i-1]<60&&a[i]<60)
		{
			totaltime+=a[i]-a[i-1]+3;
			sum-=3;
			if(totaltime==61)
				sum+=1;
			if(totaltime==62)
				sum+=2;
		}
		}
		cout<<sum<<endl;
	}
return 0;
}

