int main()
{
	int n,i;
	int a;
	double A=0;
	double B=0;
	double C=0;
	double D=0;
	double e,f,g,h;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a>=1&&a<=18)
			A+=1;
		if(a>=19&&a<=35)
			B+=1;
		if (a>=36&&a<=60)
			C+=1;
		if(a>=61)
			D+=1;
	}
	//printf("%lf %lf %lf %lf",A,B,C,D);
	e=A/n*100;f=B/n*100;g=C/n*100;h=D/n*100;
	printf("1-18: %.2lf%%\n",e);
	printf("19-35: %.2lf%%\n",f);
	printf("36-60: %.2lf%%\n",g);
	printf("60??: %.2lf%%",h);
return 0;
}