int max(int a,int b)
{
	if(a>b) return a;
	else return b;
}
int min(int a,int b)
{
	if(a>b) return b;
	else return a;
}
int main()
{
	int x1,y1,x2,y2,x,y,m,i,j,k,a[100][100],b[100][100],c[100][100];
	cin>>x1>>y1;
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			a[i][j]=0;
			b[i][j]=0;
			c[i][j]=0;
			
		}
	}
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
	x=max(x1,x2);
	y=max(y1,y2);
	m=min(x,y);
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			for(k=0;k<m;k++)
			c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
	for(i=0;i<x1;i++)
	{
		for(j=0;j<y2-1;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<c[i][y2-1]<<endl;
	}
	return 0;
}
			
	
	