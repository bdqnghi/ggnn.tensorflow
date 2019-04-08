int a[1000],b[1000];
void ccin(int m,int n);
void turn(int c[1000],int t);
void ccout(int m,int n);
int main()
{
	int m,n;
	cin>>m>>n;
	ccin(m,n);
	turn(a,m);
	turn(b,n);
	ccout(m,n);
	return 0;
}
void ccin(int m,int n)
{
	int i;
	for(i=0;i<m;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
}
void turn(int c[1000],int t)
{
	int i,j,k;
	for(i=0;i<t-1;i++)
		for(j=0;j<t-1;j++)
			if(c[j]>c[j+1])
			{
				k=c[j];
				c[j]=c[j+1];
				c[j+1]=k;
			}
}
void ccout(int m,int n)
{
	int i;
	for(i=0;i<m;i++)
		cout<<a[i]<<" ";
	for(i=0;i<n-1;i++)
		cout<<b[i]<<" ";
	cout<<b[n-1]<<endl;
}