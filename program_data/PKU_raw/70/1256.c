int main()
{
	int n;
	cin>>n;
	double a[100],b[100];
	int i,j;
	double c[100][100];
	for (i=0;i<n;i++)
		cin>>a[i]>>b[i];
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			c[i][j]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
		}
	double m=0.00;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			if (c[i][j]>m)
				m=c[i][j];
		}
	cout<<setprecision(4)<<fixed<<m<<endl;
	return 0;
}