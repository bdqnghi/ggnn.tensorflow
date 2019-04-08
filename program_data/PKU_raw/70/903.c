int main()
{
	int m;
	cin>>m;
	double x[10000],y[10000];
	for(int i=0;i<m;i++)
		cin>>x[i]>>y[i];
	double max,z;
	max=0.0;
	for(int k=0;k<m;k++)
	{
		for(int l=0;l<m;l++)
		{z=sqrt(pow((x[l]-x[k]),2.0)+pow((y[l]-y[k]),2.0));
		if(max<z) max=z;}
	}
	cout<<fixed;
	cout<<setprecision(4)<<max<<endl;
	return 0;
}