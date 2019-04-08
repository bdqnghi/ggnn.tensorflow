int main()
{
	int x1=0,y1=0,x2=0,y2=0;
	int a[100][100],b[100][100],c[100][100]={0};
	int i=0,j=0;
	cin>>x1>>y1;
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y1;j++)
			cin>>a[i][j];
	}
	cin>>x2>>y2;
	for (i=0;i<x2;i++)
	{
		for (j=0;j<y2;j++)
			cin>>b[i][j];
	}
	int n=0;
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y2;j++)
		{
			for (n=0;n<x2;n++)
			c[i][j]=c[i][j]+a[i][n]*b[n][j];
		}
	}
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y2-1;j++)
			cout<<c[i][j]<<" ";
		cout<<c[i][y2-1];
		cout<<endl;
	}
	return 0;
}
