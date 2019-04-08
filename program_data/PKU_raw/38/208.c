int main()
{
	double a[100];
	double *p;
	p=a;
	int n,k;
	cin>>n;
	double sum1=0;
	double s;
	double sum2=0;

	for (int i=1;i<=n;i++)
	{
		sum1=0;
		sum2=0;
		s=0;
		cin>>k;
		for (int j=0;j<k;j++)
		{
			cin>>p[j];
			sum1+=p[j];
		}


		sum1=sum1/k;

		for (int l=0;l<k;l++)
		{
			sum2+=(p[l]-sum1)*(p[l]-sum1);
		}

		sum2=sum2/k;
		s=sqrt(sum2);
		cout<<fixed<<setprecision(5)<<s<<endl;
	}
	return 0;
}
