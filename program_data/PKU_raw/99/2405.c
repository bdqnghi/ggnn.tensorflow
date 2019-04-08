void main()
{
	int n,i;

	int m;
	double b,c,d,e;
	b=0;c=0;d=0;e=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		if(m>=1&&m<=18)
		{
			b+=1;
		}
		
		if(m>=19&&m<=35)
		{
			c+=1;
		}
		
		if(m>=36&&m<=60)
		{
			d+=1;
		}
		
		if(m>=61)
		{
			e+=1;
		}
		
	}
	printf("1-18: %.2lf",(double)(b/n)*100);
	printf("%%\n");
	printf("19-35: %.2lf",(double)(c/n)*100);
	printf("%%\n");
	printf("36-60: %.2lf",(double)(d/n)*100);
	printf("%%\n");
	printf("60??: %.2lf",(double)(e/n)*100);
	printf("%%\n");
}