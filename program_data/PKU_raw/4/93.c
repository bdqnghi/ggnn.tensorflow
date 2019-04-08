void main()
{
	int row,col,n=0,i,j,*a[101],*h[101];
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		h[i]=a[i]=(int *)malloc(sizeof(int)*col);
		for(j=0;j<col;j++,a[i]++) scanf("%d",a[i]);
	}
	if(col==1)
	{
		for(i=0;i<row;i++) printf("%d\n",*h[i]);
	}
	else
	{
	for(i=0;i<row;i++) a[i]=h[i];
	for(i=0;i<row+col+1;i++)
	{
		for(j=0;j<=i&&j<row;j++)
		{
			if(a[j]!=h[j]+col) {printf("%d\n",*a[j]);a[j]++;}
			else continue;
		}
		if(a[j]==h[row-1]+col-1) break;
	}
	}
}