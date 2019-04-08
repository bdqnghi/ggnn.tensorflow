int main()
{
	int x1=0,y1=0,x2=0,y2=0,i=0,j=0,q=0,sum=0;
	int a[100][100],b[100][100],c[100][100];
	cin>>x1>>y1;
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y1;j++)
			cin>>a[i][j];
	}
	cin>>x2>>y2;
	for(i=0;i<x2;i++)
	{
		for(j=0;j<y2;j++)
			cin>>b[i][j];
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++)
		{
			for(q=0;q<y1;q++)
				sum=sum+a[i][q]*b[q][j];
			c[i][j]=sum;
			sum=0;
		}
	}
	for(i=0;i<x1;i++)
	{
		cout<<c[i][0];
		for(j=1;j<y2;j++)
			cout<<" "<<c[i][j];
		cout<<endl;
	}

	return 0;
}