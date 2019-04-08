int main()
{
	int a[100][100],b[100][100],c[100][100];
	int x1,y1,x2,y2,i,j,p,q,m=0;
	cin>>x1>>y1;
	for (i=0;i<x1;i++)
		for (j=0;j<y1;j++)
		{
			cin>>a[i][j];
		}
	cin>>x2>>y2;
	for (i=0;i<x2;i++)
		for (j=0;j<y2;j++)
		{
			cin>>b[i][j];
		}
	if (y1!=x2) cout<<"error!"<<endl;
	else
	{
		for (i=0;i<x1;i++)
			for (j=0;j<y2;j++)
				c[i][j]=0;
		for (i=0;i<x1;i++)
		{
			m=0;
			for (j=0;j<y2;j++)
				for (p=0;p<x2;p++)
					c[i][j]=c[i][j]+a[i][p]*b[p][j];
		}
		for (i=0;i<x1;i++)
		{
			for (j=0;j<y2-1;j++)
			{
				cout<<c[i][j]<<" ";
			}
			cout<<c[i][y2-1]<<endl;
		}
	}
	return 0;
}
