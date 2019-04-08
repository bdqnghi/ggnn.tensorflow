int a[100];
void c(int n)
{
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
}
void b(int n)
{
	int i;
	for(i=n-1;i>0;i--)
		cout<<a[i]<<" ";
	cout<<a[0];
}
int main()
{
	int n;
	cin>>n;
	c(n);
	b(n);
	return 0;
}
