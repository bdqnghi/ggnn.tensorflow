int main()
{
	int a[9][9]={0},b[9][9]={0};
	int n,t=0,i,j;
	cin>>n;
	a[4][4]=n;
	cin>>n;
	while(t<n)
	{
		for(i=1;i<8;i++)
			for(j=1;j<8;j++)
			{
				b[i-1][j-1]+=a[i][j];
				b[i-1][j]+=a[i][j];
				b[i-1][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i][j+1]+=a[i][j];
				b[i+1][j-1]+=a[i][j];
				b[i+1][j]+=a[i][j];
				b[i+1][j+1]+=a[i][j];
				b[i][j]+=a[i][j];
			}
		for(i=0;i<9;i++)
			for(j=0;j<9;j++)
			{
				a[i][j]+=b[i][j];
				b[i][j]=0;
			}
		t++;
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
			{
				cout<<a[i][j]<<' ';
			}
		cout<<a[i][8]<<endl;
	}
	return 0;
}