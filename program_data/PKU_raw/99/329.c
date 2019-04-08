int main()
{
	int age[100];
	int n;
	int i;
	int sum1=0,sum2=0,sum3=0,sum4=0,tal=0;
	double a1=0,a2=0,a3=0,a4=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
	}
	for(i=0;i<n;i++)
	{
		if(age[i]<=18) sum1++;
		if(age[i]>18&&age[i]<36) sum2++;
		if(age[i]>35&&age[i]<61) sum3++;
		if(age[i]>60) sum4++;
	}
	for(i=0;i<n;i++)
	{
		tal++;
	}
	a1=(double)sum1/tal*100;
	a2=(double)sum2/tal*100;
	a3=(double)sum3/tal*100;
	a4=(double)sum4/tal*100;
	printf("1-18: %.2lf%%\n",a1);
	printf("19-35: %.2lf%%\n",a2);
	printf("36-60: %.2lf%%\n",a3);
	printf("60??: %.2lf%%",a4);
	return 0;
}