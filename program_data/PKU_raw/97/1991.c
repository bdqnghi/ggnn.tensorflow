int main()
{
	int q,i;

	scanf("%d",&q);

	i=0;
	if(q>=100)
	{
		for(i=0;q>=100;i++)
		{
			q-=100;
		}
	}
    printf("%d\n",i);
	i=0;

	if(q>=50)
	{
	
		for(i=0;q>=50;i++)
		{
			q-=50;
		}
	
	}

	printf("%d\n",i);
	i=0;


	if(q>=20)
	{
		
		for(i=0;q>=20;i++)
		{
			q-=20;
		}
		
	}

	printf("%d\n",i);
	i=0;


	if(q>=10)
	{
		for(i=0;q>=10;i++)
		{
			q-=10;
		}
		
	}
	printf("%d\n",i);
	i=0;


	if(q>=5)
	{
		
		for(i=0;q>=5;i++)
		{
			q-=5;
		}
	}
	printf("%d\n",i);
	i=0;

	printf("%d",q);

	return 0;
}