int main()
{
	int a[8][8];
	int row,col,i,j,x,y,max,b,m;
	b=0;
	m=0;
	scanf("%d,%d",&row,&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		max=a[i][0];
		y=0;
		x=i;
		for(j=1;j<col;j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				y=j;
			}
		}
		for(j=y,i=0;i<row;i++)
		{
			if(max>a[i][j])
			{
				m=1;
				break;
			}
		}
		if(m==0)
		{
			printf("%d+%d",x,y);
		    b=1;
		}
	}
	if(b!=1)
	{
		printf("No");
	}
	return 0;
}
