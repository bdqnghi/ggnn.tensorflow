void main()
{
	double n=0;
	double i=0;
	double by=0;
	double x_1=0,x_2=0,x_3=0,x_4=0;
	double l1,l2,l3,l4;
	scanf("%lf",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&by);
		if(by<=18)
			x_1++;
		if(by<=35&&by>=19)
			x_2++;
		if(by<=60&&by>=36)
			x_3++;
		if(by>=61)
			x_4++;
	}
	l1=100*x_1/n;
	l2=100*x_2/n;
	l3=100*x_3/n;
	l4=100*x_4/n;
	printf("1-18: %.2lf%%\n",l1);
	printf("19-35: %.2lf%%\n",l2);
	printf("36-60: %.2lf%%\n",l3);
	printf("60??: %.2lf%%\n",l4);
}
