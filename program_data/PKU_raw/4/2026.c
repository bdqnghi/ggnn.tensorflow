
int main(int argc, char* argv[])
{
	int row=0,col=0,array[100][100];
	int i=0,j=0;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<col;i++)
	{
		j=0;
		while(j<=i&&j<row)
		{
			printf("%d\n",array[j][i-j]);
			j++;
		}
	}
	for(i=1;i<row;i++)
	{
		j=0;
		while(j<=row-i-1&&j<col)
		{
			printf("%d\n",array[i+j][col-1-j]);
			j++;
		}
	}
	return 0;
}