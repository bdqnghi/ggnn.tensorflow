int main()
{
	void nixu(int,int a[]);
	int i,a[100]={0},n;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	nixu(n,a);
	return 0;
}

void nixu(int n,int a[])
{
	if(n==1) cout<<a[0];
	else
	{
	cout<<a[n-1]<<' ';
	nixu(n-1,a);
	}
}