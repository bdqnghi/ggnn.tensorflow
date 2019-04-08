int main()
{
	int x[10],y[10],z[10];
	int n,i,j,p,m,h;
	double k,l[10][10];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			k=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
				l[i][j]=sqrt(k);
		}
	for(h=1;h<=n*(n-1)/2;h++)
	{
		double max=0;
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
				if(max<l[i][j])
				{
					max=l[i][j];
					p=i,m=j;
				}
		cout<<"("<<x[p]<<","<<y[p]<<","<<z[p]<<")-("<<x[m]<<","<<y[m]<<","<<z[m]<<")="<< fixed << setprecision(2)<<l[p][m]<<endl;
		l[p][m]=0;
	} 
	return 0;
}