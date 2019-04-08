int main()
{
	int row,col,i,k,j,p;
	int a[123][123];
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
		for(k=0;k<=row+col-2;k=k+1)
		{
			for(p=0;p<=k;p++)
			{
				if(p<row&&k-p<col)
				printf("%d\n",a[p][k-p]);}
		}
return 0;
}