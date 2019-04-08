void check(int x,int y)
{
	if(x==y)
		printf("%d",x);
	else
	{
		if(x>y&&x/2>=y/2)
			check(x/2,y);
		if(x<y&&x/2<=y/2)
			check(x,y/2);
	}
}
main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	check(x,y);
}