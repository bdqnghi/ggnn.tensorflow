int main()
{
	int n;
	int k;
	double input[100];
	int m=0;
	int i;
	int u=0;
	double s[100];
	for(i=0;i<100;i++)
		s[i]=0;
	scanf("%d",&n);
	while(m<n)
	{
	    scanf("%d",&k);
		double a=0;
		for(i=0;i<k;i++)
		{
			scanf("%lf",&input[i]);
		}
		for(i=0;i<k;i++)
		{
			a+=input[i];
		}
		a=a/k;
		for(i=0;i<k;i++)
		{
			s[m]+=(input[i]-a)*(input[i]-a);
		}
		s[m]=sqrt(s[m]/k);
		m++;
	}
	m=0;
	while(m<n)
	{
		printf("%.5lf\n",s[m]);	
		m++;
	}
	return 0;
}