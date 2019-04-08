int a[100001];
void swap(int n,int m)
{
	int t=a[n];
	a[n]=a[m];
	a[m]=t;
}
int main()
{
	int m,n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	for(i=1,j=n;i<=j;i++,j--)
	swap(i,j);
	for(i=1;i<n;i++)
	cout<<a[i]<<' ';
	cout<<a[n];
	return 0;
}
