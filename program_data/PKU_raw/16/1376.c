main()
{
	int a;
	scanf("%d",&a);
        int x,y;
	x=a%10;
	y=a/10;
	printf("%d",x);
	while(y>0)
	{
		x=y%10;
		y=y/10;
		printf("%d",x);
	}
}
