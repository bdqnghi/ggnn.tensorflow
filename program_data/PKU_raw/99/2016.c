int main()
{
	int i,n,x;
	double q,w,e,r,a,b,c,d;
	scanf("%d",&n);
	a=0;
	b=0;
	c=0;
	d=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x<=18)
			a=a+1;
		else if((x>18)&&(x<=35))
			b=b+1;
		else if((x>=36)&&(x<=60))
			c=c+1;
		else if(x>60)
			d=d+1;
	}
	q=a/n*100;
	w=b/n*100;
	e=c/n*100;
	r=d/n*100;
	printf("1-18: %.2lf%%\n",q);
	printf("19-35: %.2lf%%\n",w);
	printf("36-60: %.2lf%%\n",e);
	printf("60??: %.2lf%%\n",r);
	return 0;
}
