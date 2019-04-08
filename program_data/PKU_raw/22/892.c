int main()
{
	int a=0,b,c,d=0;
	char e;
	scanf("%d%c",&c,&e);
	     while(e==',')
		{
		scanf("%d%c",&b,&e);
		if (b>c)
		{
			d=c;
			c=b;}
		else
		{
			if(b>d&&b!=c)
				d=b;}
		a=a+1;
		 }
		if (d!=0)
	{
		printf("%d",d);}
	else 
	{ 
		printf("No");}
	return 0;
}