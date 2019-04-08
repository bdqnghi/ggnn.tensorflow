int main()
{
	int n;
	int a[100]={0};
	int *p,*q,r;
	cin>>n;
	for(p=a;p<a+n;p++)
	{
		cin>>*p;
	}
	for(p=a,q=a+n-1;p<q;p++,q--)
	{r=*p;*p=*q;*q=r;}
	for(p=a;p<a+n-1;p++)
	{cout<<*p<<" ";}
	cout<<*p;
	return 0;
}