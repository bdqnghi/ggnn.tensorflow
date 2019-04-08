
int main()
{
	int n;
	double x[1000],y[1000],d[1000][1000],dis=0;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			d[i][j]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			if (d[i][j]>dis)
				dis=d[i][j];
	dis=sqrt(dis);
	printf("%.4f\n",dis);
	return 0;
}