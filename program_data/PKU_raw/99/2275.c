void main()
{
	int i,n,y[100]={0},a=0,b=0,c=0,d=0;
	double aa,bb,cc,dd;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&y[i]);
		if (y[i]<=18) a=a+1;
		else if (y[i]<=35) b=b+1;
		else if (y[i]<=60) c=c+1;
		else d=d+1;
	}
	aa=(double)a/(double)n*100;
	bb=(double)b/(double)n*100;
	cc=(double)c/(double)n*100;
	dd=(double)d/(double)n*100;
	printf("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%\n",aa,bb,cc,dd);
}