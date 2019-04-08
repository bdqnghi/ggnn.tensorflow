int main()
{
	int a[100][100]={0},row,col,x1,x2,y1,y2,i,j;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;;i++)
	{   
		if(i>=((row+1)/2)) break;
        if(i>=((col+1)/2)) break;
		x1=i;x2=row-i-1;y1=i;y2=col-i-1;
		for(y1=y1;y1<=y2;y1++)
		{
			printf("%d\n",a[x1][y1]);
		}
		y1=i;
	
		for(x1=x1+1;x1<=x2;x1++)
		{
			printf("%d\n",a[x1][y2]);
		}
		x1=i;
		if(x1<x2)
		for(y2=y2-1;y2>=y1;y2--)
		{
			printf("%d\n",a[x2][y2]);
		}
        y2=col-1-i;
		if(y1<y2)
		for(x2=x2-1;x2>x1;x2--)
		{
			printf("%d\n",a[x2][y1]);
		}
	
	}
	return 0;
}

