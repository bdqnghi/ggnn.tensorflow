
int g(int a[][8],int m,int j)
{
	int min=a[0][j],i,y;
	for(i=0;i<m;i++)
	{
		if(a[i][j]<=min)
			{
				min=a[i][j];
				y=i;
			}
	}
	return y;
}



int f(int a[][8],int n,int i)
{
	int j,max=a[i][0],x;
	
	
		for(j=0;j<n;j++)
		{
			if(a[i][j]>=max)
			{
				max=a[i][j];
				x=j;
			}
		}
		return x;
}




int main()
{

	int a[8][8];
	int row, col;
	int i,j,k,p;
	scanf("%d,%d",&row,&col);

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		k=f(a,col,i);
		p=g(a,row,k);
		if(p==i)
		{
			printf("%d+%d\n",p,k);
			i=row+1;
		}
	}
	if(i==row)
		printf("No\n");

	return 0;
}


