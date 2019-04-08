int main()
{
	int x1,y1,x2,y2,i,j,m,a[101][101],b[101][101],c[101][101]={0};
	cin>>x1>>y1;
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y1;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x2>>y2;
	for (i=0;i<x2;i++)
	{
		for (j=0;j<y2;j++)
		{
			cin>>b[i][j];
		}
	}
	for (i=0;i<x1;i++)
		for (j=0;j<y2;j++)
			for (m=0;m<y1;m++)
				c[i][j]=c[i][j]+a[i][m]*b[m][j];
	for (i=0;i<x1;i++)
	{
		if(y2!=1)
		{
		cout<<c[i][0];
		for (j=1;j<y2-1;j++)
		{
			cout<<' '<<c[i][j];
		}
			cout<<' '<<c[i][y2-1]<<endl;
		}
		if(y2==1)
		{
			cout<<c[i][0]<<endl;
		}
	}
	return 0;
}