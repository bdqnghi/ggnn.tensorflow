int main()
{
	int i,j,q,a[100][100],b[100][100],x1,x2,y1,y2,c[100][100];
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			a[i][j]=b[i][j]=c[i][j]=0;
	cin>>x1>>y1;
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)
			cin>>a[i][j];
	cin>>x2>>y2;
	for(i=0;i<x2;i++)
		for(j=0;j<y2;j++)
			cin>>b[i][j];
	if(x2!=y1)
		cout<<"error";
	else
	{
		for(i=0;i<x1;i++)
		{
			for(j=0;j<y2;j++)
			{
				for(q=0;q<x2;q++)
				{
					c[i][j]=a[i][q]*b[q][j]+c[i][j];
				}
			}
		}
		/*for(i=0;i<x1;i++)
		{
			for(j=0;j<y1-1;j++)
		    {
				cout<<a[i][j]<<' ';
			}
		    cout<<a[i][y1-1]<<endl;
		}
		for(i=0;i<x2;i++)
		{
			for(j=0;j<y2-1;j++)
			{
				cout<<b[i][j]<<' ';
			}
			cout<<b[i][y2-1]<<endl;
		}*/
		for(i=0;i<x1;i++)
		{
			for(j=0;j<y2-1;j++)
				cout<<c[i][j]<<' ';
			cout<<c[i][y2-1]<<endl;
		}
	}
	return 0;
}
