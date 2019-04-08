
int main()
{
	int x1,y1,x2,y2,a[100][100],b[100][100],c[100][100]={{0}},i,j,k,n,m;
	cin>>x1>>y1;
	for(i=0;i<x1;i++)
	{for(j=0;j<y1;j++) cin>>a[i][j];}
	cin>>x2>>y2;
	for(i=0;i<x2;i++)
	{for(j=0;j<y2;j++) cin>>b[i][j];}

	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++) 
		{
			for(n=0,m=0;m<y1;n++,m++) c[i][j]=c[i][j]+a[i][n]*b[m][j];

		} 
	}
	
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2;j++) 
		{
			if(j<y2-1) cout<<c[i][j]<<" ";
			else cout<<c[i][j];
		}
	        cout<<endl;
	}

		return 0;
	}