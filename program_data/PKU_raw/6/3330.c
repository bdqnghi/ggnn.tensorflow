void main()
{
	int n=0;
	int i=0,j=0,k=0;
	int row,col;
	int str[100][100]={0};
	int x1,x2,x3,x4,sum;
	scanf("%d",&n);
	for(;i<n;i++)
	{
		x1=0;x2=0;x3=0;x4=0;
		scanf("%d%d",&row,&col);
		for(j=0;j<row;j++)
			for(k=0;k<col;k++)
				scanf("%d",&str[j][k]);
		for(j=0;j<col;j++)
			x1+=str[0][j];
		for(j=0;j<row;j++)
			x2+=str[j][0];
		for(j=0;j<col;j++)
			x3+=str[row-1][j];
		for(j=0;j<row;j++)
			x4+=str[j][col-1];
		sum=x1+x2+x3+x4-str[0][0]-str[0][col-1]-str[row-1][0]-str[row-1][col-1];
		printf("%d\n",sum);
	}
}




