
void main()
{
	double x[1000],S,a,*p[1000],sum;
	int i,k,n;
	
	scanf("%d",&k);

	for(i=0;i<1000;i++)
	{
		*(p+i)=x+i;
	}

	while(k--)
	{
		scanf("%d",&n);
		sum=0;
			
		for(i=0;i<n;i++)
		{
			scanf("%lf",*(p+i));
			sum+=**(p+i);
		}
		a=sum/n;
		
		S=0;
		for(i=0;i<n;i++)
		{
		S+=(**(p+i)-a)*(**(p+i)-a);
		}
			
		S=sqrt(S/n);
			
		printf("%.5f\n", S);
	}
}