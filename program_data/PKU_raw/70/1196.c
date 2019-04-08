int main()
{
	int n;
	double dis=0,x[101],y[101];
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>x[i]>>y[i];
	for(int i=1;i<=n;i++)
	{	for(int j=1;j!=i&&j<=n;j++)
		{
			if(dis< sqrt( (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]) ))
				dis=sqrt( (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	printf("%.4f\n", dis);
return 0;
}