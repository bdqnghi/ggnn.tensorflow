int main()
{
	int a[200][200],b[200][200],c[200][200]={0};
	int x1,y1,x2,y2;
	cin>>x1>>y1;
	for(int i=0;i<x1;i++)
	{
		for(int j=0;j<y1;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>x2>>y2;
	for(int i=0;i<x2;i++)
	{
		for(int j=0;j<y2;j++)
		{
			cin>>b[i][j];
		}
	}

	for(int i=0;i<x1;i++)
	{
		for(int j=0;j<y2;j++)
		{
	int t=0;
			while(t<=y1)
			{
				c[i][j]=c[i][j]+a[i][t]*b[t][j];
				t++;
			}
		}
	}
	int count=0;
	for(int i=0;i<x1;i++)
	{
		cout<<c[i][0];if((y2-1)==0) cout<<endl;
		for(int j=1;j<y2;j++)
		{
			cout<<" "<<c[i][j];count++;
			if((count%(y2-1))==0) cout<<endl;
		}
	}
	return 0;
}