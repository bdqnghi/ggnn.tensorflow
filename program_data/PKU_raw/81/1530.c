void main()
{
	int inrange(int x,int y);
	int matrix[5][5],m,n,i,j,temp;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&matrix[i][j]);
	}
	scanf("%d %d",&m,&n);

	if(inrange(m,n))
	{
		for(i=0;i<5;i++)
		{
			temp=matrix[m][i];
			matrix[m][i]=matrix[n][i];
			matrix[n][i]=temp;
		}
		
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j<4)
					printf("%d ",matrix[i][j]);
				else printf("%d\n",matrix[i][j]);
			}
		}
	}
	else printf("error\n");
}

int inrange(int x,int y)
{
	if((x>=0 && x<=4)&&(y>=0 && y<=4))
		return(1);
	else
		return(0);
}