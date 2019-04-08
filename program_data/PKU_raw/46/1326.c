struct node
{
	int over;
	int data;
};
void main()
{
	int row,col,i,j,point=1,heng=0,zong=0;
	struct node x[102][102];
	scanf("%d%d",&row,&col);

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&x[i][j].data);
			x[i][j].over=1;
		}
	}
	printf("%d\n",x[0][0].data);
	x[0][0].over=0;
	for(i=1;i<(row*col);)
	{
		if(point%4==1)
		{
			if(x[heng][zong+1].over==1&&(zong+1)<col)
			{
				zong++;
				printf("%d\n",x[heng][zong].data);
				x[heng][zong].over=0;
				i++;
			}
			else
				point++;
		}
		if(point%4==2)
		{
			if(x[heng+1][zong].over==1&&(heng+1)<row)
			{
				heng++;
				printf("%d\n",x[heng][zong].data);
				x[heng][zong].over=0;
				i++;
			}
			else
				point++;
		}
		if(point%4==3)
		{
			if(x[heng][zong-1].over==1&&(zong-1)>=0)
			{
				zong--;
				printf("%d\n",x[heng][zong].data);
				x[heng][zong].over=0;
				i++;
			}
			else
				point++;
		}
		if(point%4==0)
		{
			if(x[heng-1][zong].over==1&&(heng-1)>=0)
			{
				heng--;
				printf("%d\n",x[heng][zong].data);
				x[heng][zong].over=0;
				i++;
			}
			else
				point++;
		}
	}
}