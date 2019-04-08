int  a[10][10]={0},b[10][10]={0},n;
void t(int);
int main()
{
	int m ,i,j;
	cin >> m >> n;
	a[4][4]=m;
	t(1);
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			cout <<a[i][j];
			if(j==8)
				cout <<endl;
			else cout << " ";
		}
		return 0;
}
void t(int m)
{
	int i, j,l;
	if(m==n+1)
		return;
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		b[i][j]=a[i][j];
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			if(a[i][j]!=0)
			{
				l=b[i][j];
				a[i][j]+=2*l;
				a[i-1][j]+=l;
				a[i+1][j]+=l;
				a[i][j-1]+=l;
				a[i][j+1]+=l;
				
				a[i+1][j+1]+=l;
				a[i+1][j-1]+=l;
				a[i-1][j-1]+=l;
				a[i-1][j+1]+=l;
			}
		}
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		a[i][j]-=b[i][j];
		t(m+1);
}
	


