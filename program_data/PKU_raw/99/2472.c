void main()
{
	int n,age[100],i;
	double a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&age[i]);
	for(i=0;i<n;i++)
	{
		if(age[i]<19) a++;
		else if(age[i]<36) b++;
		else if(age[i]<61) c++;
		else d++;
	}
	a=100*a/(double)n;
	b=100*b/(double)n;
	c=100*c/(double)n;
	d=100*d/(double)n;
	printf("1-18: %.2f%%\n",a);
	printf("19-35: %.2f%%\n",b);
	printf("36-60: %.2f%%\n",c);
	printf("60??: %.2f%%\n",d);
}