int main()
{
	int a[100][100],n=0,row=0,col=0;
	scanf("%d %d",&row,&col);
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			scanf("%d",&(a[i][j]));
	n=row+col-1;
	for(int k=0;k<n;k++)
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
			{
				if(i+j==k)
					printf("%d\n",a[i][j]);
			}
	return 0;
}