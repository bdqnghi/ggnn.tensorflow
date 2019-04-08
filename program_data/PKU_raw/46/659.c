void main()
{
	int a[100][100],i,j,k;
	int x,y,row,col;
	scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	x=0; y=row*col;
	for(k=0;;k++){
	for(j=1+k;j<=(col-k);j++)
	{
		printf("%d\n",a[1+k][j]);
		x++;
		if(x==y)  break;
	}
	if(x==y)  break;
	for(i=2+k;i<=(row-k);i++)
	{
		printf("%d\n",a[i][col-k]);//??
		x++;
		if(x==y)  break;
	}
	if(x==y)  break;
	for(j=(col-1-k);j>k;)
	{
		printf("%d\n",a[row-k][j]);//??
		j=j-1;
		x++;
		if(x==y)  break;
	}
	if(x==y)  break;
	for(i=(row-1-k);i>(1+k);)
	{
		printf("%d\n",a[i][1+k]);//??
		i=i-1;
		x++;
		if(x==y)  break;
	}
	if(x==y)  break;
	}
}

