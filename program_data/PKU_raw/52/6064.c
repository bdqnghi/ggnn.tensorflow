//????????

int main()
{
	int n,m;
	cin>>n>>m;
	int a[300];
	int i,j;
	for(i=0;i<n;i++)
		cin>>a[i];
	int *p,*q,t;
	for(p=a+n-1;p>=a;p--)
	{
		*(p+m)=*p;
	}
	for(p=a;p<a+m;p++)
	{
		*p=*(p+n);
	}
	p=a;
	cout<<*p;
	for(p=a+1;p<a+n;p++)
		cout<<" "<<*p;
	cout<<endl;
	return 0;
}