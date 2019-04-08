int main()
{
	int n,a[100],*p;
	for(p=a,cin>>n;p<=a+n-1;++p)
		cin>>*p;
	p=p-1;
	cout<<*p;
	for(p=p-1;p>=a;--p)
		cout<<" "<<*p;
	return 0;
}