void main()
{
	int**a[100][100],i,j,col,row,k,xie;
	scanf("%d %d",&row,&col);
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			a[i][j]=(int**)malloc(10000);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
	
	xie=col+row-1;
	for(i=0;i<=xie+1;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				if(j+k!=i){continue;}
				else {printf("%d\n",*a[j][k]);}
			}
		}
	}
} 
