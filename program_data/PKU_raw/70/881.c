int main()
{
	double x[100],y[100],m,d;
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
		d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		if(d>m)
			m=d;
	}
	}
	cout<<m;
	return 0;
}





