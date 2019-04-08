int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	double a,b,ratecoil;
	scanf("%lf %lf",&a,&b);
    ratecoil=b/a;
	double rate;
	for(i=0;i<n-1;i++)
	{
		a=b=rate=0;
		scanf("%lf %lf",&a,&b);
		rate=b/a;
		if(rate>ratecoil)
		{
			if((rate-ratecoil)>0.05)
				printf("better\n");
			else
				printf("same\n");
		}
		if(rate==ratecoil)
			printf("same\n");
		if(rate<ratecoil)
		{
			if((ratecoil-rate)>0.05)
				printf("worse\n");
		    else
			printf("same\n");
		}
	}
	return 0;
}