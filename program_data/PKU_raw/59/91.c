int a[101][101]={0},mem[101][101]={0},sx[2][10001]={0},sy[2][10001]={0},sum=0,p=0;
void fuck(int x,int y)
{
	int e,f,i,j;
	e=sx[(x+1)%2][y];
	f=sy[(x+1)%2][y];
	if(a[e-1][f]==1&&mem[e-1][f]==0)
	{
		sum++;
		sx[x%2][sum]=e-1;
		sy[x%2][sum]=f;
		mem[e-1][f]=1;
		//cout<<e-1<<' '<<f<<endl;
		p++;
	}
	if(a[e+1][f]==1&&mem[e+1][f]==0)
	{
		sum++;
		sx[x%2][sum]=e+1;
		sy[x%2][sum]=f;
		mem[e+1][f]=1;
		//cout<<e+1<<' '<<f<<endl;
		p++;
	}
	if(a[e][f-1]==1&&mem[e][f-1]==0)
	{
		sum++;
		sx[x%2][sum]=e;
		sy[x%2][sum]=f-1;
		mem[e][f-1]=1;
		//cout<<e<<' '<<f-1<<endl;
		p++;
	}
	if(a[e][f+1]==1&&mem[e][f+1]==0)
	{
		sum++;
		sx[x%2][sum]=e;
		sy[x%2][sum]=f+1;
		mem[e][f+1]=1;
		//cout<<e<<' '<<f+1<<endl;
		p++;
	}
}
int main()
{
	int n,m,i,j,t;
	char c;
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin.get(c);
			if(c=='.'||c=='@')a[i][j]=1;
			if(c=='@')
			{
				mem[i][j]=1;
				sum++;
				sx[0][sum]=i;
				sy[0][sum]=j;
				p++;
			}
		}
		cin.get();
	}
	cin>>m;
	for(i=1;i<=m-1;i++)
	{
		t=sum;
		sum=0;
		for(j=1;j<=t;j++)
			fuck(i,j);
	}
	cout<<p;
	return 0;
}