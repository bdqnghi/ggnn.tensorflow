int main()
{
	int x1,y1,x2,y2;
	int a[100][100],b[100][100],c[100][100];
		int i,j,k;
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			c[i][j]=0;

	cin>>x1>>y1;
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)
			cin>>a[i][j];
		cin>>x2>>y2;
	for(i=0;i<x2;i++)
		for(j=0;j<y2;j++)
			cin>>b[i][j];
	for(i=0;i<x1;i++)
		for(j=0;j<y2;j++)
			for(k=0;k<y1;k++)c[i][j]+=a[i][k]*b[k][j];
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2-1;j++)
			cout<<c[i][j]<<" ";
		cout<<c[i][j]<<endl;

	}

     return 0;
}