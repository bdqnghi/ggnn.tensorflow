double s(double *p,double ave,int k,double x[])
{
	double t=0;
	for(;;)
	{
		t=t+(pow((*p)-ave,2));
		p++;
		if(p==(x+k))
			break;
	}
	return t;
}
int main()
{
	int i,j,n,k;
	double x[1001],ave,sum,t,r;
	double *p;
	p=x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
		sum=0;
		scanf("%d",&k);
		for(j=0;j<k;j++)
			scanf("%lf",&x[j]);
		for(;;)
		{
			sum=sum+(*(p++));
			if(p==(x+k))
				break;
		}
		ave=sum/k;
		p=x;
		t=s(p,ave,k,x);
		r=sqrt(t/k);
		printf("%.5lf\n",r);
	}
	return 0;
}