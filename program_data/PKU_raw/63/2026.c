main()
{
	int i,j,k,x1,y1,x2,y2;
	int **p1,**p2,**p3;
	
	
	scanf("%d%d",&x1,&y1);
	p1=(int**)malloc(x1*sizeof(int*));
	for(i=0;i<x1;i++)
	{
		p1[i]=(int*)malloc(y1*sizeof(int));
	}	
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		scanf("%d",&p1[i][j]);
	}
	
	
	
	scanf("%d%d",&x2,&y2);
	p2=(int**)malloc(x2*sizeof(int*));
	for(i=0;i<x2;i++)
	{
		p2[i]=(int*)malloc(y2*sizeof(int));
	}
	
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		scanf("%d",&p2[i][j]);
	}
	
	
	
	
	p3=(int**)malloc(x1*sizeof(int*));
	for(i=0;i<x1;i++)
	{
		p3[i]=(int*)malloc(y2*sizeof(int));
	}
	
	
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		p3[i][j]=0;
	}
	
	
	
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			for(k=0;k<x2;k++)
			p3[i][j]+=p1[i][k]*p2[k][j];
		}
	}
	
	
	
	for(i=0;i<x1;i++)
	{
		printf("%d",p3[i][0]);
		for(j=1;j<y2;j++)
		{
			printf(" %d",p3[i][j]);
		}
		printf("\n");
	}
	
	
}