int main()
{
	int n;
	cin>>n;
	int x[n],y[n],z[n],p,q;
	float d[n][n-1],t;
	float a[n*(n-1)/2];
    int k=0;
    int b[n*(n-1)/2],c[n*(n-1)/2];
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];

	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			{
			d[i][j]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
			a[k]=d[i][j];b[k]=i;c[k]=j;
			k++;

				}
	for(int i=1;i<n*(n-1)/2;i++)
		for(int j=0;j<n*(n-1)/2-i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				p=b[j];
								b[j]=b[j+1];
								b[j+1]=p;
								q=c[j];
												c[j]=c[j+1];
												c[j+1]=q;
			}
		}
	for(int i=0;i<k;i++)
	{
		cout<<"("<<x[b[i]]<<","<<y[b[i]]<<","<<z[b[i]]<<")-"<<"("<<x[c[i]]<<","<<y[c[i]]<<","<<z[c[i]]<<")="<<fixed<<setprecision(2)<<a[i]<<endl;
	}

return 0;


}