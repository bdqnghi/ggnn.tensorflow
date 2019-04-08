void main()
{
	int a,b,c,u;

	scanf("%d",&u);
	a=u%3;
	b=u%5;
	c=u%7;

	if (a>0) 
	{
		if (b>0)
			if (c>0) printf("n");
			else printf("7");
		else 
			if (c>0) printf("5");
			else printf("5 7");
	}
	else 
	{
		if (b>0)
			if (c>0) printf("3");
			else printf("3 7");
		else 
			if (c>0) printf("3 5");
			else printf("3 5 7");
	}

}