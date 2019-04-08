int main()
{
	int row,col,**p,num;
	int i,j,k;
	scanf("%d %d",&row,&col);
	num=row*col;
	p=(int **)malloc(row*sizeof(int));
	for(i=0;i<row;i++)
	{
		*(p+i)=(int *)malloc(col*sizeof(int));
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",*(p+i)+j);
		}
	}
	for(i=0;i<col+row-1;i++)
	{
		k=0;
		j=i;
		while(j>=0&&k<=row)
		{
			if(j<col&&k<row)
			{
				printf("%d\n",*(*(p+k)+j));
			}
			k=k+1;
			j=j-1;
		}
	}
	return 0;
}