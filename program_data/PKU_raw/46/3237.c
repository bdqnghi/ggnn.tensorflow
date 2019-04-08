int main()
{ 
	int row,col;
	int time=0;
	int i,j;
	int a[100][100];
	int x1,x2,y1,y2;
	scanf("%d %d",&row,&col);
	x1=y1=1;
	x2=row;
	y2=col; 
	for(i=1;i<=row;i++)  
	{
		 for(j=1;j<=col;j++) 
			 scanf("%d",&a[i][j]);
	}
	while(time<row*col)
	{
		for(i=y1;i<=y2;i++)
		{
			if (time==row*col) break;
			printf("%d\n",a[x1][i]);
			time++;
		}
		for(i=x1+1;i<=x2;i++)
		{
			if(time==row*col) break;
			printf("%d\n",a[i][y2]);
			time++;
		}
		for(i=y2-1;i>=y1;i--)
		{
			if(time==row*col) break;
			printf("%d\n",a[x2][i]);
			time++;
		}
		for(i=x2-1;i>=x1+1;i--)
		{
			if(time==row*col) break;
			printf("%d\n",a[i][y1]);
			time++;
		}
		x1++;
		x2--;
		y2--;
		y1++;
	}
	return 0;
}