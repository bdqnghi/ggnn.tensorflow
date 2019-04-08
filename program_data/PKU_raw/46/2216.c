void main()
{
	void shuru(int,int);
	int row,col;
	scanf("%d%d",&row,&col);
	shuru(row-1,col-1);
}
void shuru(int x,int y)
{
	void huixing(int (*p)[100],int,int,int);
	int i,j,k,t;
	int a[100][100];
	int (*p)[100];
	p=a;
	for(i=0;i<=x;i++)
	{
		for(j=0;j<=y;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(x<y) t=x;
	else t=y;
	for(k=0;k<=t/2;k++)
	{
		huixing(p,k,x,y);
	}
}
void huixing(int (*p)[100],int g,int h,int l)
{
	int i,sum=0;
	for(i=0;i<=l-2*g;i++)
	{
		if(sum<(h-2*g+1)*(l-2*g+1))
		{
			printf("%d\n",*(*(p+g)+g+i));
			sum=sum+1;
		}
	}
	for(i=1;i<=h-2*g;i++)
	{
		if(sum<(h-2*g+1)*(l-2*g+1))
		{
			printf("%d\n",*(*(p+g+i)+l-g));
			sum=sum+1;
		}
	}
	for(i=1;i<=l-2*g;i++)
	{
		if(sum<(h-2*g+1)*(l-2*g+1))
		{
			printf("%d\n",*(*(p+h-g)+l-g-i));
			sum=sum+1;
		}
	}
	for(i=1;i<h-2*g;i++)
	{
		if(sum<(h-2*g+1)*(l-2*g+1))
		{
			printf("%d\n",*(*(p+h-g-i)+g));
			sum=sum+1;
		}
	}
}