
int main()
{
	int a[101][101],row,line;
	int i,j,judge=0,t,T,sum;
	scanf("%d",&t);
	for(T=0;T<t;T++)
	{
		sum=0;
		scanf("%d %d",&row,&line);
		if(row==1||line==1)
		{
			for(i=0;i<row;i++)
				for(j=0;j<line;j++)
					scanf("%d",(*(a+i)+j));
			for(i=0;i<row;i++)
				for(j=0;j<line;j++)
					sum+=*(*(a+i)+j);
			printf("%d\n",sum);
			return 0;
		}
		for(i=0;i<row;i++)
		{
			for(j=0;j<line;j++)
			{
				scanf("%d",(*(a+i)+j));
			}
		}
		for(i=0;i<row;i++)
		{
			sum+=*(*(a+i)+0);
			sum+=*(*(a+i)+line-1);
		}
		for(j=0;j<line;j++)
		{
			sum+=*(*(a+0)+j);
			sum+=*(*(a+row-1)+j);
		}
		sum=sum-*(*(a+0)+0)-*(*(a+0)+line-1)-*(*(a+row-1)+line-1)-*(*(a+row-1)+0);
		printf("%d\n",sum);
	}
	return 0;
}