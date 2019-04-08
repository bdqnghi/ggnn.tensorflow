/*????*/
int main( )
{
	int n,m,i,a[101];
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i];
	int *p=a,*q;
	/*???m??*/
	for(i=n-m+1;i<=n;i++)
	{
		q=(p+i);
		cout<<*q<<" ";
	}
	/*???n-m??*/
	for(i=1;i<n-m;i++)
	{
		q=(p+i);
		cout<<*q<<" ";
	}
	cout<<a[n-m];
	return 0;
}
