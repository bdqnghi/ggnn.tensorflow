int main()
{
	int a[4],i,x,y;
	for(i=0;i<=3;i++)
	scanf("%d\n",&a[i]);
	for(i=0;i<=3;i++)
	{
	
	
	x=a[i];

	if(x<=9)
		y=x;
	else
	{
		y=0;
		for(;x>9;x/=10)
			y=(y+x-x/10*10)*10;
			y=y+x;

	}
	printf("%d\n",y);
	}
	
	return 0;
}