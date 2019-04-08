void main(){
	int row,col,max;
	scanf("%d%d",&row,&col);
	int i,j;
	int a[101][101];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	for(i=0;i<=row+col-2;i++)
		{
			max=0;
			if(row-1<i) max=row-1;
			else max=i;
		for(j=0;j<=max;j++)
			{
			if(i-j<=col-1)
				{
					printf("%d\n",a[j][i-j]);
				}
			}
		}
}