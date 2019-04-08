void main()
{
	int a[100],n,i;
	double b,c,d,e,x,y,m,l;
	scanf("%d",&n);
	for(i=0,b=0,c=0,d=0,e=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<=18)
			b++;
		if((a[i]<=35)&&(a[i]>=19))
			c++;
		if((a[i]<=60)&&(a[i]>=36))
			d++;
		if(a[i]>=61)
			e++;
	}
	x=100*b/(double)n;
	y=100*c/(double)n;
	m=100*d/(double)n;
	l=100*e/(double)n;
	printf("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%\n",x,y,m,l);
}