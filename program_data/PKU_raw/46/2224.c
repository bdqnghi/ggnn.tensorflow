void main()
{
	int row,col,a[100][100],i,k;
	void shun(int a[][100],int x,int y);
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(k=0;k<col;k++)
		{
			scanf("%d",&a[i][k]);
		}
	}
	shun(a,row,col);
}
void shun(int a[][100],int x,int y)
{
	int b=0,c,d=0,e=0,sum,n=0;
	sum=x*y;
	while(n<=sum)
	{
		for(c=b;c<y;c++)
		{
			printf("%d\n",a[b][c]);
			n=n+1;
			if(n==sum)
				break;
		}
		b=b+1;
		if(n==sum)
			break;
	
		for(c=b;c<x;c++)
		{
			printf("%d\n",a[c][y-1]);
			n=n+1;
			if(n==sum)
				break;
		}
		y=y-1;
		if(n==sum)
			break;
		for(c=y-1;c>=d;c--)
		{
			printf("%d\n",a[x-1][c]);
			n=n+1;
			if(n==sum)
				break;
		}
		x=x-1;
		d=d+1;
		if(n==sum)
			break;
		for(c=x-1;c>=b;c--)
		{
			printf("%d\n",a[c][e]);
			n=n+1;
			if(n==sum)
				break;
		}
		e=e+1;
		if(n==sum)
			break;
	}
}