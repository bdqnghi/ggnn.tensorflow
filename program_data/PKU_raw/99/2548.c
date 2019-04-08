int main()
{
	double n;
	int i;
	double a=0;
	double b=0;
	double c=0;
	double d=0;
	double A=0;
	double B=0;
	double C=0;
	double D=0;
	int age[101];
	scanf("%lf",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
	}
	for (i=0;i<n;i++)
	{
		if (age[i]<=18)
		{
			A+=1;
		}
		else if(19<=age[i]&&age[i]<=35)
		{
			B+=1;
		}
		else if(36<=age[i]&&age[i]<=60)
		{
			C+=1;
		}
		else if(age[i]>60)
		{
			D+=1;
		}
	}
	
	a=100*A/n;
	b=100*B/n;
	c=100*C/n;
	d=100*D/n;

	printf("1-18: %.2lf%%\n",a);
	printf("19-35: %.2lf%%\n", b);
	printf("36-60: %.2lf%%\n",c);
	printf("60??: %.2lf%%",d);

	return 0;
}