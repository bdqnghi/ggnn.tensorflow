int main()
{
	int x,y=0;
	scanf("%d",&x);
	if(x<10)
		printf("%d",x);
	else
	{
	while(x>0)
	{
		y=x%10+10*y;
			x=x/10;
	}
	if(x%10!=0)
	printf("%d",y);
	else
	printf("%03d",y);
	}
	return 0;
}
