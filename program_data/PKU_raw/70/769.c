int main()
{
	int n;
	int m=0;
	cin>>n;
	double x[10000],y[10000];
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i];
	double max,z;
	max=0.0;
	for(int k=0;k<n;k++)
	{
		for(int l=0;l<n;l++)
		{z=sqrt(pow((x[l]-x[k]),2.0)+pow((y[l]-y[k]),2.0));
		if(max<z) max=z;}
	}
	
	cout<<max<<endl;
	return 0;
}