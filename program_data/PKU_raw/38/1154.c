void main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		int n;
		scanf("%d",&n);
		double *p;
		p=(float*)calloc(n,sizeof(float));
		int i;double j;
		for(i=0;i<n;i++) scanf("%lf",p++);
		p=p-n;
		double*f;
	     f=p;
	    double sum=0;
	    for(i=0;i<n;i++,f++) sum=sum+(*f);
		 double x=sum/n;
		 double x1=0;
		 f=p;
		 for(i=0;i<n;i++,f++) x1=x1+(*f-x)*(*f-x);
		 double x2;
		 x2=sqrt(x1/n);
		 printf("%.5f\n",x2);
		 
	
	
	}


}