
int main()
{
    int x,i,k;
	scanf("%d",&k);
	for (x=1;x<=k;x++)
	{
		int n;
		scanf("%d",&n);
		double *p,*head;
		p=(double*)(calloc(n,8));
		head=p;
		for (i=0;i<n;i++)
		{
			scanf("%lf",p);
			p++;
		}
		p=head;
		double sum_a=0.0,sum_s=0.0,a,s;
		for (i=0;i<n;i++)
		{
			sum_a+=*p;
			p++;
		}
		a=sum_a/(n*1.0);
		p=head;
		for (i=0;i<n;i++)
		{
			sum_s+=(*p-a)*(*p-a);
			p++;
		}
		s=sqrt(sum_s/(n*1.0));
		printf("%.5f\n",s);
	}
	return 0;
}