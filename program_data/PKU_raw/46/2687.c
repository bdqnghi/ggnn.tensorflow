void main()
{
	int a[105][105],row,col,min,i,j;
	int n,x;
	scanf("%d %d",&row,&col);
	for(i=1;i<=row;i++) for(j=1;j<=col;j++) scanf("%d",&a[i][j]);
	if(row<=col) min=row; else min=col;
	if(min%2==0) n=min/2; else n=min/2+1;
	for(x=1;x<=n;x++)
	{
		i=x;
		for(j=x;j<=col-x+1;j++) printf("%d\n",a[i][j]);
		if(row==min&&row%2==1&&x==n) break;
		j=col-x+1;
		for(i=x+1;i<=row-x+1;i++) printf("%d\n",a[i][j]);
		if(col==min&&col%2==1&&x==n) break;
		i=row-x+1;
		for(j=col-x;j>=x;j--) printf("%d\n",a[i][j]);
		if(row==min&&row%2==0&&x==n) break;
		j=x;
		for(i=row-x;i>=x+1;i--) printf("%d\n",a[i][j]);
	}
}