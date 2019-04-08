int main()
{
	int a[100];
	a[1]=1;
	a[2]=1;
	for(int i=3;i<=21;i++)
		a[i]=a[i-1]+a[i-2];
	int n;
	int m;
	cin>>n;
	while(n--)
	{
		cin>>m;
		cout<<a[m]<<endl;
	}

}