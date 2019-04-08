//????
int main()
{
	int x1,y1,x2,y2,a[100][100],b[100][100],c[100][100],i,j,k;
	cin>>x1>>y1;//???????
	for (i=0;i<x1;i++)
	{
		for (j=0;j<y1;j++)
			cin>>a[i][j];
	}
	cin>>x2>>y2;
	for (i=0;i<x2;i++)//???????
	{
		for (j=0;j<y2;j++)
			cin>>b[i][j];
	}
	for (i=0;i<x1;i++)//????
	{
		for (j=0;j<y2;j++)
		{
			c[i][j]=0;
			for(k=0;k<y1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for (i=0;i<x1;i++)//??????
	{
		for (j=0;j<y2-1;j++)
			cout<<c[i][j]<<' ';
		cout<<c[i][y2-1]<<endl;
	}
	return 0;
}