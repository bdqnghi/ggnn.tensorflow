int f(int *p,int m,int n)
{
	int row,col,temp,sum=0;
	for(row=1;row<m+1;row++)
	{
		for(col=1;col<n+1;col++)
		{
			if(row==1 || row==m || col==1 || col==n)
			{
				temp=*(p+n*(row-1)+col);
				sum+=temp;
			}
		}
	}
	return sum;
}
int main()
{
	int k,m,n,i,s,row,col;
	int *p;
	p=(int *)malloc(sizeof(int));
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&m,&n);
		for(row=1;row<m+1;row++)
		{
			for(col=1;col<n+1;col++)
			{
				scanf("%d",p+n*(row-1)+col);
			}
		}
		s=f(p,m,n);
		printf("%d\n",s);
	}
	return 0;
}