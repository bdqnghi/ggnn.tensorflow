int main()
{
	int i,j,k,n,t,a[150],b[150],x[11],y[11],z[11];
	double r,c[150];
	cin>>n;
	for (i=1;i<=n;i++)
				cin>>x[i]>>y[i]>>z[i];
	t=0;
	for (i=1;i<=n-1;i++)
		for (j=i+1;j<=n;j++)
			{
				t++;
				a[t]=i;b[t]=j;
				c[t]=sqrt(
				          (x[i]-x[j])*(x[i]-x[j])
				         +(y[i]-y[j])*(y[i]-y[j])
													+(z[i]-z[j])*(z[i]-z[j])
													);
			}
			
			for (i=1;i<=t-1;i++)
				for (j=1;j<=t-i;j++)
					if (c[j+1]>c[j])
						{
							k=a[j+1];a[j+1]=a[j];a[j]=k;
							k=b[j+1];b[j+1]=b[j];b[j]=k;
							r=c[j+1];c[j+1]=c[j];c[j]=r;
					 }
cout<<fixed;
for (i=1;i<=t;i++)
cout<<"("
    <<x[a[i]]<<","<<y[a[i]]<<","<<z[a[i]]
    <<")-("
				<<x[b[i]]<<","<<y[b[i]]<<","<<z[b[i]]
				<<")="
				<<setprecision(2)<<c[i]<<endl;
cin>>i;
	return 0;
}
