int main()
{
	int n,i;
	double a[100];
	double sum1=0,sum2=0,sum3=0,sum4=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);

	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=1 && a[i]<=18)
		{
			sum1=sum1+1;
		}
		if(a[i]>=19 && a[i]<=35)
		{
			sum2=sum2+1;
		}
		if(a[i]>=36 && a[i]<=60)
		{
			sum3=sum3+1;
		}
		if(a[i]>=61)
		{
			sum4=sum4+1;
		}
	}
	printf("1-18: %.2lf%\n",sum1/n*100);
	printf("19-35: %.2lf%\n",sum2/n*100);
	printf("36-60: %.2lf%\n",sum3/n*100);
	printf("60??: %.2lf%\n",sum4/n*100);




	return 0;
}

