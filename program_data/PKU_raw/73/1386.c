int main()
{
	int max,min;
	int sz[100][100],m[100],n[100],s;
	max=0;
	min=35500;
	s=0;
	for(int i=0;i<5;i++)
	{
		for(int k=0;k<5;k++)
		{
			scanf("%d",&sz[i][k]);
			if(max<sz[i][k])
			{
				max=sz[i][k];
			}	
		}
		m[i]=max;
		max=0;
	}
	for(int p=0;p<5;p++)
	{
		for(int q=0;q<5;q++)
		{
			if(min>sz[q][p])
			{
				min=sz[q][p];
			}
		}
		n[p]=min;
		min=100000;
	}
	for(int x=0;x<5;x++)
	{
		for(int y=0;y<5;y++)
		{
			if(sz[x][y]==m[x]&&sz[x][y]==n[y])
			{			
				s++;
				printf("%d %d %d",x+1,y+1,sz[x][y]);

			}
		}
	}
	if(s==0)
		printf("not found");
return 0;
}

