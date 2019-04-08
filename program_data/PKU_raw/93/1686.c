void main()
{
	int m;
	scanf("%d",&m);
	if(m%3*m%5*m%7==0)
	{
		if(m%3==0&&m%5*m%7==0)
		printf("3 ");
		if(m%3==0&&m%5*m%7!=0)
			printf("3");
	if(m%5==0&&m%7==0)
         printf("5 ");
	if(m%5==0&&m%7!=0)
		printf("5");
	if(m%7==0)
		printf("7\n");
	}
	else printf("n\n");
}