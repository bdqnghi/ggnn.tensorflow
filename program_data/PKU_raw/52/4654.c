
void move(int n, int *p)
{
	int t=p[n-1];
	for (int i=n-1;i>0;i--)
		p[i]=p[i-1];
	*p=t;
}

int main( )
{
	int n,m,k,a[1000];
	cin>>n>>m;
	for (k=0;k<n;k++)
		cin>>a[k];
	for (k=1;k<=m;k++)
		move(n,a);
	for (k=0;k<n-1;k++)
		cout<<a[k]<<' ';
	cout<<a[n-1];
	return 0;
}
