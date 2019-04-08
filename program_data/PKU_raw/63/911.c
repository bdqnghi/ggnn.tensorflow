void main()
{
	int a[200][200],b[200][200],c[200][200]={{0}},i,j,temp=0,x1,x2,y1,y2,count,q;
	scanf("%d %d",&x1,&y1);
	count=0;
	for(i=0;i<=x1-1;i++)
	{
		for(j=0;j<=y1-1;j++)
		{
			scanf("%d",&temp);
			a[i][j]=temp;
		}
	}
    

	scanf("%d %d",&x2,&y2);
	for(i=0;i<=x2-1;i++)
	{
		for(j=0;j<=y2-1;j++)
		{
			scanf("%d",&temp);
			b[i][j]=temp;			
		}
	}

	i=0;
	j=0;
	while(i<=x1-1)
	{		
		while(j<=y2-1)
		{
			for(q=0;q<=y1-1;q++)
				count=count+a[i][q]*b[q][j];
			c[i][j]=count;
			count=0;
			j++;
		}
		i++;
		j=0;
	}
	for(i=0;i<=x1-1;i++)
	{
		for(j=0;j<=y2-1;j++)
		{
			if(j<y2-1)
				printf("%d ",c[i][j]);
			else if(j==(y2-1))
				printf("%d\n",c[i][j]);
		}
	}
}

