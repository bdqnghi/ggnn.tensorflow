int main()
{
	int i,n,s[100];
	double a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
		if(s[i]>0&&s[i]<19)
			a=a+1;
		if(s[i]>18&&s[i]<36)
			b=b+1;
		if(s[i]>35&&s[i]<61)
			c=c+1;
		if(s[i]>60)
			d=d+1;
	}
	a=(double)100*a/n;
	b=(double)100*b/n;
	c=(double)100*c/n;
	d=(double)100*d/n;
	printf("1-18:");
	printf("% .2lf",a);
	printf("%%\n");
	printf("19-35:");
	printf("% .2lf",b);
	printf("%%\n");
	printf("36-60:");
	printf("% .2lf",c);
	printf("%%\n");
	printf("60??:");
	printf("% .2lf",d);
	printf("%%");
	return 0;
}