int main()
{
	int i,j,m,n,a[9][9]={0},b[9][9]={0};
	cin>>m>>n;
	a[4][4]=m;
	while(n--)
	{
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
				if(a[i][j]!=0)
				{
					b[i][j]+=2*a[i][j];
					b[i-1][j]+=a[i][j];
					b[i+1][j]+=a[i][j];
					b[i][j-1]+=a[i][j];
					b[i][j+1]+=a[i][j];
					b[i-1][j-1]+=a[i][j];
					b[i-1][j+1]+=a[i][j];
					b[i+1][j-1]+=a[i][j];
					b[i+1][j+1]+=a[i][j];
				}
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
				a[i][j]=b[i][j];
			memset(b,0,sizeof(b));
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
			cout<<a[i][j]<<' ';
	    cout<<a[i][8]<<endl;
	}
	return 0;
}

