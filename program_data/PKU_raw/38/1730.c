
int main()
{
	int k,n;
	double x[1000],a,s;
	cin>>k;
	while (k--)
	{
		cin>>n;
		a=0; s=0;
		for (int i=0;i<n;i++)
		{
			cin>>x[i];
			a=a+x[i];
		}
		a=a/n;
		for (int i=0;i<n;i++)
			s=s+(x[i]-a)*(x[i]-a);
		s=s/n;
		s=sqrt(s);
		printf("%.5f\n",s);
	}
	return 0;
}