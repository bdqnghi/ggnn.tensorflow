int main()
{
	int k,i,j,n;
	double a[100],x,s,*p;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		p=a;
		s=0;
		x=0;
		scanf("%d",&n);
		for(j=0;j<n;j++,p++)
		{
			scanf("%lf",p);
			x=x+*p;
		}
		p=a;
		x=x/(double)n;
		for(j=0;j<n;j++,p++)
		{
			s=s+(*p-x)*(*p-x);
		}
		s=s/(double)n;
		s=sqrt(s);
		printf("%.5lf\n",s);
	}
	return 0;
}
