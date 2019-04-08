
int main()
{
	int sz[100][100];
	int a,b,row,col,i;
	scanf("%d %d",&a,&b);
	for(row=0;row<a;row++)
	{
		for(col=0;col<b;col++)
		{
			scanf("%d",&sz[row][col]);
		}
	}
	for(i=0;i<b;i++)
	{
		for(col=i;col>=0&&(i-col)<a;col--)
		{
			printf("%d\n",sz[i-col][col]);
		}
	}
	for(i=b;i<a+b;i++)
	{
		for(col=b-1;col>=0&&(i-col)<a;col--)
		{
			printf("%d\n",sz[i-col][col]);
		}
	}
	return 0;
}