int hang(int i,int row,int col,int sz[8][8])   //?????????????
{
int j,max;
max=sz[i][0];
for(j=1;j<col;j++)
{
if(sz[i][j]>max)
max=sz[i][j];
}
return max;
}
int lie(int j,int row,int col,int sz[8][8])     //?????????????
{
int i,min;
min=sz[0][j];
for(i=1;i<row;i++)
	{
	if(sz[i][j]<min)
		min=sz[i][j];
	}
return min;
}
void main()
{
int row,col,i,j,sz[8][8],flag=0,m,n;
scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			m=hang(i,row,col,sz);
			n=lie(j,row,col,sz);
			if(m==n)     //??????????????
			{
				printf("%d+%d\n",i,j);
				flag++;
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	/*	for(i=0;i<row;i++)
		{
		for(j=0;j<col;j++)
		{
			printf("%d",sz[i][j]);
		}
		}*/

	if(flag==0)
	printf("No\n");
	}