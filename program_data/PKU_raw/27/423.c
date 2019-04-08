main()
{
	int n,i;
	double a,b,c,d;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%lf%lf%lf",&a,&b,&c);
		d=b*b-4*a*c;
		if(d>0)
			printf("x1=%.5f;x2=%.5f\n",(-b+sqrt(d))/2/a,(-b-sqrt(d))/2/a);
		else 
			if(d==0)
				printf("x1=x2=%.5f\n",-b/2/a);
			else
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",-b/2/a,sqrt(-d)/2/a,-b/2/a,sqrt(-d)/2/a);
	}
	return 0;
}
