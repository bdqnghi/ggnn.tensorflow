int main()
{
	int a[100][100];
    int n,row,col,i,j;
    scanf("%d%d",&row,&col);
	for(i=0;i<=row-1;i++)
		for(j=0;j<=col-1;j++)
			scanf("%d",&a[i][j]);
    if(row>=col)
	{
		for(n=0;n<=col-1;n++)
		   for(i=0;i<=n;i++)printf("%d\n",a[i][n-i]);
	    for(n=col;n<=row-1;n++)
           for(i=n-col+1;i<=n;i++)printf("%d\n",a[i][n-i]);
		for(n=row;n<=row+col-2;n++)
			for(i=n-col+1;i<=row-1;i++)printf("%d\n",a[i][n-i]);
	}
/*	else if(row==col)
	{
		for(n=0;n<=row-1;n++)
			for(i=0;i<=n;i++)printf("%d\n",a[i][n-i]);
		for(n=row;n<=2*row-2;n++)
			for(i=n-row+1;i<=row-1;i++)printf("%d\n",a[i][n-i]);
	}?????1???????????????*/
	else
	{
		for(n=0;n<=row-1;n++)
			for(i=0;i<=n;i++)printf("%d\n",a[i][n-i]);
		for(n=row;n<=col-1;n++)
			for(i=0;i<=row-1;i++)printf("%d\n",a[i][n-i]);
		for(n=col;n<=row+col-2;n++)
			for(i=n-col+1;i<=row-1;i++)printf("%d\n",a[i][n-i]);
	}
    return 0;
}