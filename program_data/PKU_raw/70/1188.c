int main()
{
	int n,k=0;
	cin>>n;
	double x[100],y[100],d[500];
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			d[k++]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<k-i;j++)
		{
			if(d[j]<d[j+1]) swap(d[j],d[j+1]);
		}
	}
	cout<<fixed<<setprecision(4)<<d[0]<<endl;
	return 0;
}