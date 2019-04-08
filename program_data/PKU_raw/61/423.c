
int main()
{
	int a[20]={1,1};
	int i=0;
	for (i=2;i<=20;i++) a[i]=a[i-1]+a[i-2];//?20?
	int n=0;
	cin>>n;
	int b[100]={0};//????
	for (i=0;i<=n-1;i++)
	{
		cin>>b[i];
	}
	for (i=0;i<=n-1;i++)
	{
		cout<<a[b[i]-1]<<endl;
	}
	return 0;
}