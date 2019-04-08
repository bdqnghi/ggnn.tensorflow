void main()
{
    int num=0,i,j,row,col,a[105][105],h;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    for(j=0;j<col;j++)
    	scanf("%d",&a[i][j]);
    	for(h=0;h<col+row-1;h++)
    	{
    		if(h<col)
    	{
    		for(i=0;i<row&&h-i>=0&&h-i<col;i++)
    		{
    			j=h-i;
    			printf("%d\n",a[i][j]);
    		}
    	}
    	else 
    	for(j=col-1;j>=0&&h-j>=0&&h-j<row;j--)
    	{
    		i=h-j;
    		printf("%d\n",a[i][j]);
    	}
    	}
    	
}