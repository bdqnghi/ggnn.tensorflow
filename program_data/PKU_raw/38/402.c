int main()
{
	int n,i,j,num;
	double av=0.0;
	double sum=0.0;
	double cha=0.0;
	double s=0.0;
	double f;
	double a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		av=0.0;
		sum=0.0;
		cha=0.0;
		s=0.0;
		f=0.0;
		scanf("%d",&num);
		for(j=0;j<num;j++)
		{
			scanf("%lf",&a[j]);
			sum=sum+a[j];
		}
		av=sum/num;
		for(j=0;j<num;j++)
			cha=cha+(a[j]-av)*(a[j]-av);
		s=cha/num;
        f=sqrt(s);
		printf("%.5f\n",f);
	}
	return 0;
}