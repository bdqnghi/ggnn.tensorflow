int main()
{
	int i,j,x=0,y=0,row,col,k=0;
	int a[100][100];
	int dx[4]={0,1,0,-1};
	int dy[4]={1,0,-1,0};
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row*col;i++)
	{
		printf("%d\n",a[x][y]);
		if(k==0 && x+y==col-1)
			k=1;
		else if(k==1 && x-y==row-col)
			k=2;
		else if(k==2 && x+y==row-1)
			k=3;
		else if(k==3 && x-y==1)
			k=0;
		x+=dx[k];
		y+=dy[k]; 
	}
	return 0;
}