main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a%10;
	printf("%d",b);
	c=a/10;
	if(c!=0)
		printf("%d",c%10);
	d=a/100;
	if(d!=0)
		printf("%d",d%10);
	e=a/1000;
	if(e!=0)
		printf("%d",e);

	return 0;
}