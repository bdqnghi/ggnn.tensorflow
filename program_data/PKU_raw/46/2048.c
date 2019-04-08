void main()
{
	int row,col,i,j;
	int a[100][100];
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{for(j=0;j<col;j++)
	scanf("%d",&a[i][j]);}
	for(;row>1&&col>1;)
	{for(j=0;j<col;j++)
		printf("%d\n",a[0][j]);
	for(i=1;i<row;i++)
		printf("%d\n",a[i][col-1]);
	for(j=col-2;j>=0;j--)
		printf("%d\n",a[row-1][j]);
	for(i=row-2;i>=1;i--)
		printf("%d\n",a[i][0]);
	for(i=0;i<row-2;i++)
	{for(j=0;j<col-2;j++)
	a[i][j]=a[i+1][j+1];}
	row=row-2;
	col=col-2;
	}
	if(row==1)
	{for(i=0;i<col;i++)
	printf("%d\n",a[0][i]);
	}
	else 
	{for(i=0;i<row;i++)
	printf("%d\n",a[i][0]);
	}
}