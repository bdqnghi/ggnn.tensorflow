int main()
{
	int n,i;
	double a,q=0,w=0,e=0,r=0;
	scanf("%d",&n);
	double z,x,c,v;
	for(i=1;i<=n;i++)
	{
		
		scanf("%lf",&a);
		if(a>=1&&a<=18)
		{q++;}
		else if(a>=19&&a<=35)
		{w++;}
		else if(a>=36&&a<=60)
		{e++;}
		else
		{r++;}
      }
	z=(q/n)*100;
	x=(w/n)*100;
	c=(e/n)*100;
	v=(r/n)*100;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",z,x,c,v);
	return 0;
}

