int main()
{
	int n,i=0,j=0,k=0;
	double x[10000],y[10000],dis[10000],max=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			dis[k++]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	for(i=0;i<k;i++)
	{
		if(max<dis[i])
		{
			max=dis[i];
		}
	}
	cout<<fixed<<setprecision(4)<<max<<endl;
	return 0;
}

