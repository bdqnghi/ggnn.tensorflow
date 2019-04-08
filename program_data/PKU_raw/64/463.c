int main()
{
	int x[10],y[10],z[10],i,j,n,m=1,l;
	double d[46],p;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>z[i];
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			d[m]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
			m=m+1;
		}
	for(i=1;i<m;i++)
	{
		for(j=1;j<=m-i;j++)
		{
			if(d[j]<d[j+1])
			{
				p=d[j];
				d[j]=d[j+1];
				d[j+1]=p;
			}
		}
	}
	for(i=m;i>1;i--)
	{
		if(d[i]==d[i-1])
			d[i]=0;
	}

	for (l=1;l<=m;l++)
	{
		if(d[l]!=0)
		{
			for(i=0;i<n-1;i++)
			{
			for(j=i;j<n;j++)
			{
				if(sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]))==d[l])
				{
			    cout<<"("<<x[i]<<","<<y[i]<<","<<z[i]<<")-("<<x[j]<<","<<y[j]<<","<<z[j]<<")="<<fixed<<setprecision(2)<<d[l]<<endl;
				}
			}
			}
		}
	}

			return 0;
}
