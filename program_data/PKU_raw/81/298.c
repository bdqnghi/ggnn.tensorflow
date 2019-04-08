main()
{
	int a[5][5],b[5];
	int i,j,m,n;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&m,&n);
    if(m>4||n>4)
	{		
		printf("error");
		return(0);
	}
	else
	{
		for(i=0;i<5;i++)
	       b[i]=a[m][i];
		for(i=0;i<5;i++)
	       a[m][i]=a[n][i];
		for(i=0;i<5;i++)
	       a[n][i]=b[i];
        for(i=0;i<5;i++)
		{
		    for(j=0;j<5;j++)
			{
			   if(j==4)
				 printf("%d\n",a[i][j]);
			   else 
				 printf("%d ",a[i][j]);
			} 
		}
		return(1);
	}
}