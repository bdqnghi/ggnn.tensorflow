int main()
{
	int n;
	cin>>n;
	int i,j,k,r,t;
	double s;
	int x[11],y[11],z[11];
	for(i=1;i<=n;i++)
	{
		
		cin>>x[i]>>y[i]>>z[i];
	}
	
	double w[100];
	int p[100],q[100];
	i = 1;
	int d=n*(n-1)/2;
	for(j = 1;j < n;j++)
		{
			for (k = j+1;k<= n;k++)
			{
		       w[i]=sqrt(pow((x[j]-x[k]),2.0)+pow((y[j]-y[k]),2.0)+pow((z[j]-z[k]),2.0));
			   p[i]=j;
			   q[i]=k;
			   i++;
	
			}
		}
	for(j=1;j<d;j++)
	{
		for(i=1;i<=d-j;i++)
		{
		if(w[i]<w[i+1])
		{
			s=w[i];
			w[i]=w[i+1];
			w[i+1]=s;
			r=p[i];
			p[i]=p[i+1];
			p[i+1]=r;
			t=q[i];
			q[i]=q[i+1];
			q[i+1]=t;

		}
		}

	}
	for(i=1;i<=d;i++)
		cout<<"("<<x[p[i]]<<","<<y[p[i]]<<","<<z[p[i]]<<")-"<<"("<<x[q[i]]<<","<<y[q[i]]<<","<<z[q[i]]<<")="<<fixed<<setprecision(2)<<w[i]<<endl;
	return 0;
}
