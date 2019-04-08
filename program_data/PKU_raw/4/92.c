void main()
{
	int row,col,n=0,i,j,a[100][100];
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++) scanf("%d",&a[i][j]);
	}
	i=0;j=0;
	while(n<row+col-1)
	{
		printf("%d\n",a[i][j]);
		if(j==0||(i==row-1&&j!=0)) {n++;j=n;i=0;}
		else {i++;j--;}
		while(j>col-1) {j--;i++;}
		if(i==row-1&&j==col-1) {printf("%d\n",a[i][j]);break;}
	}
}