void main()
{
	int a[100][100];
	int b,c,d,i,j,e;
	scanf("%d %d",&b,&c);
	for (i=0;i<b;i++)
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	if (b<c)
		d=b;
	if(b>=c)
		d=c;
	if (d%2==0)
	{
		for (e=0;e<d/2;e++)
		{
			i=e;
			for(j=e;j<c-1-e;j++)
				printf("%d\n",a[i][j]);
			j=c-1-e;
			for (i=e;i<b-1-e;i++)
				printf("%d\n",a[i][j]);
			i=b-1-e;
			for(j=c-e-1;j>e;j--)
				printf("%d\n",a[i][j]);
			j=e;
			for(i=b-1-e;i>e;i--)
				printf("%d\n",a[i][j]);
		}
	}
	if (d%2!=0)
	{
		for (e=0;e<d/2;e++)
		{
			i=e;
			for(j=e;j<c-1-e;j++)
				printf("%d\n",a[i][j]);
			j=c-1-e;
			for (i=e;i<b-1-e;i++)
				printf("%d\n",a[i][j]);
			i=b-1-e;
			for(j=c-e-1;j>e;j--)
				printf("%d\n",a[i][j]);
			j=e;
			for(i=b-1-e;i>e;i--)
				printf("%d\n",a[i][j]);
		}
		if (d==b&&d!=c)
		{
			j=d/2;
			for (i=d/2;i<c-d/2;i++)
				printf("%d\n",a[j][i]);
		}
		if (d==c&&d!=b)
		{
			j=d/2;
			for(i=d/2;i<b-d/2;i++)
				printf("%d\n",a[i][j]);
		}
		if (d==c&&d==b)
		{
			i=j=d/2;
			printf("%d",a[i][j]);
		}
	}

}
