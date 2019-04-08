void main()
{
	int n,m,i,j;
	double p=1,q=1,o,s=1,t=1,r,sum;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		sum=0;
		p=1;q=1;s=1;t=1;
		scanf("%d",&n);
		for(j=0;j<1;j++)
		{
			sum=sum+(p+q);
			o=q;
			q=p+q;
			p=o;
		}
		for(j=1;j<n;j++)
		{
			sum=sum+(p+q)/(s+t);
			o=q;
			q=p+q;
			p=o;
			r=t;
			t=t+s;
			s=r;
		}
		printf("%.3lf\n",sum);
	}
}
