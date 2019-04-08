//????

int main()
{
	int a[100],n,b;
cin>>n;
for(int i=n-1;i>=0;--i)
{
	cin>>b;
	a[i]=b;//???
}
for(int i=0;i<n-1;++i)
{
	cout<<a[i]<<" ";
}
        cout<<a[n-1];
	return 0;
}