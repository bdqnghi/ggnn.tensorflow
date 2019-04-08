int main()
{
	int a[100][100]={0},row,col,i=0,j=0,t=0,s=0,isRow,isCol;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	}
	i=0;
	j=0;
	do
	{
		for(j=t;j<col-t;j++)
			printf("%d\n",a[i][j]);
		j-=1;
		isRow = 0;
		for(i=s+1;i<row-s;i++)
		{
			printf("%d\n",a[i][j]);
			isRow = 1;
		}
		if( isRow== 0 )  break;
		i-=1;
		t+=1;
		isCol = 0;
		for(j=col-t-1;j>=s;j--)
		{
			printf("%d\n",a[i][j]);
			isCol = 1;
		}
		if( isCol== 0 )  break;

		j+=1;
		s+=1;
		for(i=row-s-1;i>=t;i--)
			printf("%d\n",a[i][j]);
		i+=1;
	}
	while(t!=col && s!=row);
	return 0;
}