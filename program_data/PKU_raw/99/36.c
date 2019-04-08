void main()
{
	int age[100];
	int i;
	double a=0,b=0,c=0,d=0,n;
	scanf("%lf",&n);
	for(i=0;i<n;i++)
		scanf("%d",&age[i]);
	for(i=0;i<n;i++)
	{
		if(age[i]<=18)
			a+=1;
		else if(age[i]>=19&&age[i]<=35)
			b+=1;
		else if(age[i]>=36&&age[i]<=60)
			c+=1;
		else
			d+=1;

	}
	printf("1-18: %.2lf%%\n",a/n*100);
	printf("19-35: %.2lf%%\n",b/n*100);
	printf("36-60: %.2lf%%\n",c/n*100);
	printf("60??: %.2lf%%",d/n*100);
}