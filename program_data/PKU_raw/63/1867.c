
main()
{
	int a[101][101]={0},b[101][101]={0},c[101][101]={0};
	int x1 ,y1 ,x2, y2,i,j,k,number=0;
	scanf("%d%d",&x1,&y1);
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		scanf("%d",&a[i][j]);
	}
	scanf("%d%d",&x2,&y2);
		for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2-1;j++)
		{
			for(k=0;k<y1;k++)
			number=number+a[i][k]*b[k][j];
			c[i][j]=number;	
			printf("%d ",c[i][j]);
			number=0;
		}
		if(j==y2-1)
		{
			for(k=0;k<y1;k++)
			number=number+a[i][k]*b[k][j];
			c[i][y2-1]=number;	
			printf("%d\n",c[i][j]);
			number=0;
		}	
	}

} 