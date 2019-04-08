int m,n,i,a[100],b[100],c[200];
void in()//??
{
	cin>>m>>n;
	for(i=0;i<m;++i)
		cin>>a[i];
	for(i=0;i<n;++i)
		cin>>b[i];
}
void sort()//??
{
	sort(&a[0],&a[0]+m);
	sort(&b[0],&b[0]+n);
}
void add()//??
{
	for(i=0;i<m;++i)
		c[i]=a[i];
	for(i=m;i<m+n;++i)
		c[i]=b[i-m];
}
void out()//??
{
	cout<<c[0];
	for(i=1;i<m+n;++i)
		cout<<" "<<c[i];
}
int main()
{
	in();
	sort();
	add();
	out();
	return 0;
}

