void main()
{
	int n,i,m[100];
	double a,b,c,d;

	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&m[i]);
	}

	a=0;
	b=0;
	c=0;
	d=0;

	for(i=0;i<=n-1;i++)
	{
		if(m[i]<=18) a=a+1;
		if(m[i]>18&&m[i]<=35) b=b+1;
		if(m[i]>35&&m[i]<=60) c=c+1;
		if(m[i]>=61) d=d+1;
	}
	a=(double)a*100/(double)n;
	b=(double)b*100/(double)n;
	c=(double)c*100/(double)n;
	d=(double)d*100/(double)n;

	printf("1-18: %.2f%%\n""19-35: %.2f%%\n""36-60: %.2f%%\n""60??: %.2f%%\n",a,b,c,d);

}