void main()
{
	int i,j,k,n,row,col,c[100][100],result[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&row,&col);
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				scanf("%d",*(c+j)+k);
				if(k==0||k==col-1||j==0||j==row-1)
					result[i]+=*(*(c+j)+k);
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d\n",result[i]);
}