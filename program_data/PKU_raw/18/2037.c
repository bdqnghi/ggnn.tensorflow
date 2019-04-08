int n,m,min1;
int a[110][110];
void del()
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=1;j<m;j++)
			a[i][j]=a[i][j+1];
	for(i=0;i<m;i++)
		for(j=1;j<m;j++)
			a[j][i]=a[j+1][i];
}
void delmin(int x,int y,int dx,int dy)
{
	if(x==m||y==m)
		return;
	if(a[x][y]<min1)
		min1=a[x][y];
	delmin(x+dx,y+dy,dx,dy);
	a[x][y]-=min1;
}
int main()
{
	cin>>n;
	int i=0,j=0,k=0,sum=0;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		for(sum=0,m=n;m>1;m--)
		{
			for(i=0;i<2*m;i++)
			{
				min1=10000;
			    delmin((i%m)*(1-i/m),(i%m)*(i/m),i/m,1-i/m);
			}
			sum+=a[1][1];
			del();
		}
		cout<<sum<<endl;
	}
}
