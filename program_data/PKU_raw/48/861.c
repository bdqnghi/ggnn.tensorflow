int main()
{
	int a[9][9]={0},b[9][9]={0},n,i,j;
	cin>>a[4][4];
	cin>>n;
	while(n>0)
	{
		n--;
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
				if(a[i][j]!=0)
					b[i][j]=a[i][j]*2;
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
				if(a[i][j]!=0)
				{
					b[i+1][j]=a[i][j]+b[i+1][j];
					b[i-1][j]=a[i][j]+b[i-1][j];
					b[i][j+1]=a[i][j]+b[i][j+1];
					b[i][j-1]=a[i][j]+b[i][j-1];
					b[i+1][j+1]=a[i][j]+b[i+1][j+1];
					b[i-1][j-1]=a[i][j]+b[i-1][j-1];
					b[i+1][j-1]=a[i][j]+b[i+1][j-1];
					b[i-1][j+1]=a[i][j]+b[i-1][j+1];
				}
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
				a[i][j]=b[i][j];
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
				b[i][j]=0;
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
			cout<<a[i][j]<<' ';
		cout<<a[i][8];
		cout<<endl;
	}
	return 0;
}