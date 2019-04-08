
int main()
{
		int n;
		double z,x[1000],y[1000];
		cin>>n;
		for (int i=1;i<=n;i++) cin>>x[i]>>y[i];

		for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
				if ((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])>z)
				z=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
		  	cout<<fixed<<setprecision(4)<<sqrt(z);
cin>>n;}
