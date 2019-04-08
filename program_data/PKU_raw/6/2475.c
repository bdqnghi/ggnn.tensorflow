int main()
{
	int k,i;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		int row,col,j,l,sum=0,num[100][100];
		scanf("%d %d",&col,&row);
		for(l=0;l<col;l++)
		{
			int *a=num[l];
			for(j=0;j<row;j++)
			{
				scanf("%d",a+j);
				if(l==0||l==col-1||j==0||j==row-1)
				{
					sum=sum+*(a+j);
				}
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}