int n,m;
int a[2][100];
void order(int x,int y)
{
	int i,j,t;
	for(i=0;i<y;i++)
		cin>>a[x][i];
	for(i=0;i<y-1;i++)
		for(j=0;j<y-1-i;j++)
			if(a[x][j]>a[x][j+1])
			{
				t=a[x][j];a[x][j]=a[x][j+1];a[x][j+1]=t;
			}
}
void output()
{
	int i;
	for(i=0;i<n;i++)
		cout<<a[0][i]<<" ";
	for(i=0;i<m-1;i++)
		cout<<a[1][i]<<" ";
	cout<<a[1][m-1];
}
int main()
{
	cin>>n>>m;
	order(0,n),order(1,m);
	output();
	return 0;
}