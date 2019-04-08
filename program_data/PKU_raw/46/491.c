int b[10000];
void bianli(int a[100][100],int m,int n)
{
	int i,j,k=0;
	int *p;
	p=b;
	for(i=0;k<(m+1)*(n+1);i++)
	{
		for(j=i;j<=n-i;j++)
		{
			*p=a[i][j];
			p++;
			k++;
		}
		for(j=i+1;j<=m-i;j++)
		{
			*p=a[j][n-i];
			p++;
			k++;
		}
		for(j=n-i-1;j>=i;j--)
		{
			*p=a[m-i][j];
			p++;
			k++;
		}
		for(j=m-i-1;j>i;j--)
		{
			*p=a[j][i];
			p++;
			k++;
		}

	}

}
void main()
{
	int a[100][100];
	int i,j;
	int *p;
	int row,col;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
    bianli(a,row-1,col-1);
	for(i=0;i<row*col;i++)
		printf("%d\n",b[i]);

}
