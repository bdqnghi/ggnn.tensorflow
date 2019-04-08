int a[100][100];
int main()
{
	int row,c,i,j,d,x,l,r,s,t,y;
	scanf("%d%d",&row,&c);
	for(i=0;i<row;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}
	d=1;
	r=c-1;
	x=0;
	l=row-1;
	s=1;
	y=0;
	t=0;
	printf("%d\n",a[0][0]);
	for(i=1;i<row*c;i++)
	{
		if(d==1)
		{
			if(t==r)
			{
				r=r-1;
				d=-1;
			}
		}
		else if(d==-1)
		{
			if(y==l)
			{
				l=l-1;
				d=2;
			}
		}
		else if(d==2)
		{
			if(t==x)
			{
				x=x+1;
				d=-2;
			}
		}
		else if(d==-2)
		{
			if(y==s)
			{
				s=s+1;
				d=1;
			}
		}
		if(d==1)
			t=t+1;
		else if(d==-1)
			y=y+1;
		else if(d==2)
			t=t-1;
		else if(d==-2)
			y=y-1;
		printf("%d\n",a[y][t]);
	}
}
