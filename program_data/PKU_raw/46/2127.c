int times(int x,int y)
{
	int z;
	z=(x<y)?x:y;
	if(z%2) return (z+1)/2;
	else return z/2;
}
void spinout(int b[100][100],int x,int y)
{
	int i,j,k[100][100]={0};
    for(i=0;i<times(x,y);i++)
	{
		for(j=0;j<y;j++)
		{
			if(k[i][j]==0)
			{
				printf("%d\n",b[i][j]);
				k[i][j]=1;
			}
		}
		for(j=0;j<x;j++)
		{
			if(k[j][y-1-i]==0)
			{
				printf("%d\n",b[j][y-1-i]);
				k[j][y-1-i]=1;
			}
		}
        for(j=y-1;j>=0;j--)
		{
			if(k[x-1-i][j]==0)
			{
				printf("%d\n",b[x-1-i][j]);
				k[x-1-i][j]=1;
			}
		}
		for(j=x-1;j>=0;j--)
		{
			if(k[j][i]==0)
			{
				printf("%d\n",b[j][i]);
				k[j][i]=1;
			}
		}
	}
}
void main()
{
	int row,col,i,j,a[100][100];
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",*(a+i)+j);
	spinout(a,row,col);
}