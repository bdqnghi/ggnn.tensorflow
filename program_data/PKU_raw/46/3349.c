int sign[100][100]={0},arr[100][100];
void right(int i,int j)
{
	void down(int i,int j);
	printf("%d\n",arr[i][j]);
	sign[i][j]=0;
	if(sign[i][j+1]!=0)
	{
		right(i,j+1);
	}
	else
	{
		if(sign[i+1][j]!=0)
		{
			down(i+1,j);
		}
	}
}
void left(int i,int j)
{
	void up(int i,int j);
	printf("%d\n",arr[i][j]);
	sign[i][j]=0;
	if(sign[i][j-1]!=0&&j>0)
	{
		left(i,j-1);
	}
	else
	{
		if(sign[i-1][j]!=0)
		{
			up(i-1,j);
		}
	}
}
void up(int i,int j)
{
	void right(int i,int j);
	printf("%d\n",arr[i][j]);
	sign[i][j]=0;
	if(sign[i-1][j]!=0&&i>0)
	{
		up(i-1,j);
	}
	else
	{
		if(sign[i][j+1]!=0)
		{
			right(i,j+1);
		}
	}
}
void down(int i,int j)
{
	void left(int i,int j);
	printf("%d\n",arr[i][j]);
	sign[i][j]=0;
	if(sign[i+1][j]!=0)
	{
		down(i+1,j);
	}
	else
	{
		if(sign[i][j-1]!=0)
		{
			left(i,j-1);
		}
	}
}
int main()
{
	void left(int i,int j);
	void right(int i,int j);
	void up(int i,int j);
	void down(int i,int j);
	int row,col,i,j;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
			sign[i][j]=1;
		}
	}
	right(0,0);
	return 0;
}