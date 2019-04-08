int x,y,x1,y1;
void next()
{
	if((x1==0)&&(y1==1))
	{
		x1=1;
		y1=0;
	}
	else if((x1==1)&&(y1==0))
	{
		x1=0;
		y1=-1;
	}
	else if ((x1==0)&&(y1==-1))
	{
		x1=-1;
		y1=0;
	}
	else if((x1==-1)&&(y1==0))
	{
		x1=0;
		y1=1;
	}
}
void main()
{
	int a[200][200]={0},row,col,i,j,count;
    scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	x1=0;
	y1=1;
	for(x=1,y=0,count=1;count<=row*col;)
	{
		x=x+x1;
		y=y+y1;
		if(a[x][y]==0)
		{
			x=x-x1;
			y=y-y1;
			next();
		}
		else
		{
			printf("%d\n",a[x][y]);
			a[x][y]=0;
			count++;
		}
	}
}