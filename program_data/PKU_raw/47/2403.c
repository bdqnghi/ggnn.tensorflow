int main()
{
	int *p=NULL,*q=NULL;
	int n,a[110];
	p=a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>*p++;
	}//????
	for(p=a,q=a+n-1;p<q;q--,p++)
	{
		int t;
		t=*p;*p=*q;*q=t;//????
	}
	for(p=a;p<a+n-1;)
		cout<<*p++<<" ";
	cout<<*p<<endl;//??
	return 0;
}