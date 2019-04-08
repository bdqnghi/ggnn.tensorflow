int main()
{
	int n,i,j,k;
	int x[10],y[10],z[10];
	double t;
	double d[45];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
			d[(j-i)+(n-1+n-i)*i/2-1]=sqrt((double)((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j])));
	}
	for(i=0;i<n*(n-1)/2-1;i++)
	{
		for(j=i+1;j<n*(n-1)/2;j++)
		{	
			if(d[i]<d[j])
			{t=d[i];d[i]=d[j];d[j]=t;
			}
		}
	}
	for(k=0;k<n*(n-1)/2;k++)
	{
	    if(d[k]!=d[k+1])
		{
			for(i=0;i<n-1;i++)
			{
		        for(j=i+1;j<n;j++)
				{	 
					if(sqrt((double)((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j])))-d[k]==0)
					 {cout<<"("<<x[i]<<","<<y[i]<<","<<z[i]<<")-("<<x[j]<<","<<y[j]<<","<<z[j]<<")=";
					  cout<<(fixed)<<setprecision(2)<<d[k]<<'\n';
					 }
				}
			}
		}
	}
	return 0;
}
