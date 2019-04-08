int main()
{
	int sz[9][9];
	int sj[9][9];

	int a,n,row,col,r,m,x,y;
	scanf("%d %d",&a,&n);
	for(row=0;row<9;row++)
	{
		for(col=0;col<9;col++)
		{
			sz[row][col]=0;
			sj[row][col]=0;
		}
	}
	sz[4][4]=a;


	for(row=0;row<9;row++)
	{
		for(col=0;col<9;col++)
		{
			sj[row][col]=sz[row][col];
			
		}
	}
	for(row=0;row<9;row++)
	{
		for(col=0;col<9;col++)
		{
			if(sz[row][col]!=0)
			{
				for(r=(row-1);r<=(row+1);r++)
				{
					for(m=(col-1);m<=(col+1);m++)
					{
						sj[r][m]+=sz[row][col];
					}
				}
			}
		}
	}
	if(n==1)
	{
		for(x=0;x<9;x++)
		{
			for(y=0;y<8;y++)
			{
				printf("%d ",sj[x][y]);
			}
			printf("%d\n",sj[x][y]);
		}
	
	}

		for(row=0;row<9;row++)
	{
		for(col=0;col<9;col++)
		{
			sz[row][col]=sj[row][col];
			
		}
	}
	for(row=0;row<9;row++)
	{
		for(col=0;col<9;col++)
		{
			
			if(sj[row][col]!=0)
			{
				for(r=row-1;r<=row+1;r++)
				{
					for(m=col-1;m<=col+1;m++)
					{
						sz[r][m]+=sj[row][col];
					}
				}
			}
		}
	}
	if(n==2)
	{
		for(x=0;x<9;x++)
		{
			for(y=0;y<8;y++)
			{
				printf("%d ",sz[x][y]);
			}
			printf("%d\n",sz[x][y]);
		}

	}


		for(row=0;row<9;row++)
	{
		for(col=0;col<9;col++)
		{
			sj[row][col]=sz[row][col];
			
		}
	}

		for(row=0;row<9;row++)
	{
		for(col=0;col<9;col++)
		{
			
			if(sz[row][col]!=0)
			{
				for(r=row-1;r<=row+1;r++)
				{
					for(m=col-1;m<=col+1;m++)
					{
						sj[r][m]+=sz[row][col];
					}
				}
			}
		}
	}
	if(n==3)
	{
		for(x=0;x<9;x++)
		{
			for(y=0;y<8;y++)
			{
				printf("%d ",sj[x][y]);
			}
			printf("%d\n",sj[x][y]);
		}

	}

		for(row=0;row<9;row++)
	{
		for(col=0;col<9;col++)
		{
			sz[row][col]=sj[row][col];
			
		}
	}


	for(row=0;row<9;row++)
	{
		for(col=0;col<9;col++)
		{
			
			if(sj[row][col]!=0)
			{
				for(r=row-1;r<=row+1;r++)
				{
					for(m=col-1;m<=col+1;m++)
					{
						sz[r][m]+=sj[row][col];
					}
				}
			}
		}
	}
	if(n==4)
	{
		for(x=0;x<9;x++)
		{
			for(y=0;y<8;y++)
			{
				printf("%d ",sz[x][y]);
			}
			printf("%d\n",sz[x][y]);
		}
	
	}

	return 0;
	}
