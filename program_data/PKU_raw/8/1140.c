int a[100],b[100],c[200],n1,n2;
int shuru(void)
{
	cin>>n1>>n2;
	for(int i=0;i<n1;i++)
		cin>>a[i];
	for(int i=0;i<n2;i++)
		cin>>b[i];
}
int pai()
{
	int m;
	for(int j=0;j<n1-1;j++)
		for(int i=0;i<n1-1;i++)
			if(a[i]>a[i+1])
			{
				m=a[i+1];
				a[i+1]=a[i];
				a[i]=m;
			}
	for(int j=0;j<n2-1;j++)
		for(int i=0;i<n2-1;i++)
			if(b[i]>b[i+1])
			{
				m=b[i+1];
				b[i+1]=b[i];
				b[i]=m;
			}
}
int jie()
{
	for(int i=0;i<n1;i++)
		c[i]=a[i];
	for(int i=0;i<n2;i++)
		c[n1+i]=b[i];
}
int shuchu()
{
	cout<<c[0];
	for(int i=1;i<n1+n2;i++)
		cout<<" "<<c[i];
}
int main()
{
	shuru();
	pai();
	jie();
	shuchu();
	return 0;
}