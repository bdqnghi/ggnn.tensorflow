int main()
{
    int row,col,r,c;
	int i,j,times;
	int x,y;
	int a[120][120];

	scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++)
		for(j=1;j<=col;j++)
			scanf("%d",&a[i][j]);
	
    r=row;
	c=col;
	times=0;
	x=1;
    y=0;
	while(times<r*c)
	{
		if(col!=0)
		{
			for(i=1;i<=col;i++)
			{
				printf("%d\n",a[x][y+i]);
				times++;
			}
			y+=col;
			row--;
	        if(times==r*c)
				  col=row=0;
		}
		if(row!=0)
		{
		    for(i=1;i<=row;i++)
			{
			    printf("%d\n",a[x+i][y]);
				times++;
				
			}
			x+=row;
			col--;
            if(times==r*c)
				  col=row=0;
		}
		if(col!=0)
		{
		    for(i=1;i<=col;i++)
			{
			    printf("%d\n",a[x][y-i]);
				times++;
				
			}	
			y-=col;
			row--;
            if(times==r*c)
				  col=row=0;
		}
		if(row!=0)
		{
		    for(i=1;i<=row;i++)
			{
			    printf("%d\n",a[x-i][y]);
				times++;
			}
			x-=row;
			col--;
            if(times==r*c)
				  col=row=0;            
		}
	}
  
	return 0;
}
