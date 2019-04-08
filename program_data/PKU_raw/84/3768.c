void main()
{
	int n,i,a,c,d;
	scanf("%d\n",&n);
	i=1;
	scanf("%d\n",&a);
	c=a;
	while(i<n)
	{	scanf("%d\n",&a);
	if(c<a)
	{
		d=c;
	c=a;
	}
	else
		if(d<a)
		d=a;
	i++;
	}
	printf("%d\n",c);
	printf("%d\n",d);

}
	

 