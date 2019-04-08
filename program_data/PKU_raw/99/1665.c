int main()
{
	double n, a=0.0, b=0.0, c=0.0, d=0.0, temp;
	scanf("%lf",&n);
    for(int i=0;i<n;i++)
	{
		scanf("%lf",&temp);
		if(temp<=18) a=a+1.0;
		if(temp>18&&temp<=35) b=b+1.0;
		if(temp>35&&temp<=60) c=c+1.0;
		if(temp>60) d=d+1.0;
	}
	
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",100.00*a/n, 100.00*b/n, 100.00*c/n, 100.00*d/n);
	return 0;
}

		