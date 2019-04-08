int main()
{
	int n,a[100],b=0,c=0,d=0,e=0,i;
	double o,p,q,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>0&&a[i]<19)
		{
			b=b+1;
		}
		else if(a[i]>18&&a[i]<36)
		{
			c=c+1;
		}
		else if(a[i]>35&&a[i]<61)
		{
			d=d+1;
		}
		else
		{
			e=e+1;
		}
	}
	o=(double)b/n*100;
	p=(double)c/n*100;
	q=(double)d/n*100;
	s=(double)e/n*100;
    printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",o,p,q,s);
	return 0;
}