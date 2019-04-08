void main()
{
	int i,j,k,a[8][8],b[8],max,row,col,result=1;
	scanf("%d,%d",&row,&col);
	for(i=0;i<row;i++)
	{
		max=0;
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]>a[i][max]) max=j; 
		}
		b[i]=max;
	}
	for(i=0;i<row;i++) 
	{
		for(k=0;k<row;k++)
		{
			if(a[k][b[i]]<a[i][b[i]]) result=0;
		}
		if(result)
		{
			printf("%d+%d",i,b[i]);
			break;
		}
		else
		{
			printf("No");
			break;
		}
	}
}

