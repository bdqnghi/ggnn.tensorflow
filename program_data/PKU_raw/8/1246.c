int a[1000],b[1000],m,n;
void shuru(void)
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
}
void paixu(int f[],int length)
{
	int x;
	for(int i=0;i<length-1;i++)
		for(int j=0;j<=length-2-i;j++)
			if (f[j]>f[j+1])
			{
				x=f[j];
				f[j]=f[j+1];
				f[j+1]=x;
			}
}
void shuchu(void)
{
	int i;
	for(i=0;i<m;i++)
			cout<<a[i]<<' ';
	for(i=0;i<n-1;i++)
				cout<<b[i]<<' ';
	cout<<b[i]<<endl;
}
int main()
{
	shuru();
	paixu(a,m);
	paixu(b,n);

	shuchu();
}

