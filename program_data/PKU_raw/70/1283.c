struct raul
	{
		double a1;
		double a2;
		double b1;
		double b2;
		double c;
	}dian[100],t;

int main()
{
	int n;
	cin>>n;
	int i;
	double a[50][2];
	for(i=1;i<=n;i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	int j,m=1;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			dian[m].a1=a[i][0];
			dian[m].a2=a[i][1];
			dian[m].b1=a[j][0];
			dian[m].b2=a[j][1];
			dian[m].c=(a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]);
			dian[m].c=sqrt(dian[m].c);
			m++;
		}
	}
	double max=dian[1].c;
	for(i=2;i<=m;i++)
	{
		if(dian[i].c>max)
			max=dian[i].c;
	}
	cout<<fixed<<setprecision(4)<<max;
	return 0;
}