int main()
{
	int n,i,j,l,max,start,row,col;
	int a[200][200];
	scanf("%d%d",&row,&col);
	for (i=1;i<=row;i++)
		for (j=1;j<=col;j++)
			scanf("%d",&a[i][j]);

	i=1;j=1;
	do
	{
		printf("%d\n",a[i][j]);
		i++;j--;
		if (j==0) 
			if (i+j<col+1) {j=i;i=1;} else {i=i+j+1-col;j=col;}
		if (i>row) 
			if (i+j<col+1) {j=i+j;i=1;} else {i=row+2+j-col;j=col;}
			
	}
	while (i<=row);
	return 0;
}