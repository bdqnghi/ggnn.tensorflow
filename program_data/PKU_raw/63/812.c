int m[100][100],n[100][100],c[100][100]={0};
int main()
{
	int x1,x2,y1,y2,i,j,k;
	cin>>x1>>y1;
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
		{
			cin>>m[i][j];
		}
	}
	cin>>x2>>y2;
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
		{
			cin>>n[i][j];
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			for(k=0;k<x2;k++)
			c[i][j]+=m[i][k]*n[k][j];
		}
		for(j=0;j<y2-1;j++)
			cout<<c[i][j]<<' ';
		cout<<c[i][y2-1]<<endl;
	}
	return 0;
}





