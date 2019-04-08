int main()
{
	char zfc[1000];
	gets(zfc);
	int k=strlen(zfc);
	int i;
	int count=0;
	int p;
	int min1=0,min=1000,max=0,max1=0;
	for (i=0;i<k;i++)
	{
		if (zfc[i]!=32)
		{
			count=count+1;
		}
		else
		{
			if (max<count)
			{
				max=count;
				max1=i-1;
			}
			if (min>count)
			{
				min=count;
				min1=i-1;
			}
			count=0;
			p=i;
		}
		
			



	}
	count=k-1-p;
	if (max<count)
	{
				max=count;
				max1=i-1;
	}
			if (min>count)
	{
				min=count;
				min1=i-1;
	}

	for (i=max1-max+1;i<=max1;i++)
	{
		printf("%c",zfc[i]);
	}
	printf("\n");
	for (i=min1-min+1;i<=min1;i++)
	{
		printf("%c",zfc[i]);
	}
	return 0;
}