int main()
{
	int i,j,k,a[100][100],b[100][100],c[100][100],x1,x2,y1,y2;
	memset(c,0,sizeof(c));
	cin>>x1>>x2;
	for (i=0;i<=x1-1;i++)
		for (j=0;j<=x2-1;j++)
			cin>>a[i][j];
	cin>>y1>>y2;
	for (i=0;i<=y1-1;i++)
		for (j=0;j<=y2-1;j++)
			cin>>b[i][j];
	for (i=0;i<=x1-1;i++)
		for (j=0;j<=y2-1;j++)
			for (k=0;k<=x2-1;k++)
				c[i][j]+=a[i][k]*b[k][j];
	for (i=0;i<=x1-1;i++)
	{
		for (j=0;j<=y2-2;j++)
			cout<<c[i][j]<<" ";
		cout<<c[i][y2-1]<<endl;
	}
	return 0;
}