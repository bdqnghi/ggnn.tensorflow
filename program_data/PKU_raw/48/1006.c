int a[11][11],b[11][11];
void fa(int i,int j)
{
	a[i][j]=2*b[i][j]+b[i-1][j]+b[i+1][j]+b[i-1][j-1]+
		    b[i-1][j+1]+b[i][j+1]+b[i][j-1]+b[i+1][j-1]+
			b[i+1][j+1];
}
int main()
{
	
	int m,n;
	cin>>m>>n;
	int i,j;
	for(i=0;i<=10;i++)
			for(j=0;j<=10;j++)
			{
				a[i][j]=0;
				b[i][j]=0;
			}
	a[5][5]=m;
	for(int z=1;z<=n;z++)
	{
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
				b[i][j]=a[i][j];
		for(i=1;i<=9;i++)
			for(j=1;j<=9;j++)
				fa(i,j);
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=8;j++)
		    cout<<a[i][j]<<" ";
		cout<<a[i][9]<<'\n';
	}
	return 0;
}

