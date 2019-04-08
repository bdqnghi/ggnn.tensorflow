
int function(int* a,int n)
{
	if(n!=1)
	function(a+1,n-1);
	cout<<a[0]<<' ';
	return 0;
}

int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	function(a+1,n-1);
	cout<<a[0];
	return 0;
}