
int m,n,a[20][20];

int height(int i,int j)
{
	if(i<0||i>=m||j<0||j>=n)return -1;
	else return a[i][j];
}

void check(int i,int j)
{
	if(a[i][j]>=height(i-1,j)&&a[i][j]>=height(i+1,j)&&a[i][j]>=height(i,j-1)&&a[i][j]>=height(i,j+1))cout<<i<<' '<<j<<endl;
}

int main()
{
	int i,j;
	cin>>m>>n;
	for(i=0;i<m;i++)for(j=0;j<n;j++)cin>>a[i][j];
	for(i=0;i<m;i++)for(j=0;j<n;j++)check(i,j);
	return 0;
}

