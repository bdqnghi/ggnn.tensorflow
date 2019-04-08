
int hanshu(int x,int y)
{
	if(x>=0&&x<5)
	{
		if(y>=0&&y<5)
		{
			return 1;
		}
	}
	if(x<0||x>4)
	{
		return 0;
	}
	return 0;
}

int main()
{
	int num[5][5],jum[5];
	int i,j;
	int m,n;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}

	scanf("%d %d",&n,&m);

	int h = hanshu(n,m);

	if(h==1)
	{
		for(i=0;i<5;i++)
		{
			jum[i] = num[n][i];
			num[n][i] = num[m][i];
			num[m][i] = jum[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",num[i][j]);
			}
			printf("%d\n",num[i][4]);
		}
		return 0;
	}
	if(h==0)
	{
		printf("error");
		return 0;
	}
	return 0;
}