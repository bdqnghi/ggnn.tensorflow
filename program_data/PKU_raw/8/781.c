int n,m;
int a[100],b[100];
void scanf()
{
	int i;
	cin>>n>>m;
	for (i=1;i<=n;i++) cin>>a[i];
	for (i=1;i<=m;i++) cin>>b[i];
}
void sort()
{
	int i,j;
	for (i=1;i<n;i++)
		for (j=i+1;j<=n;j++)
			if (a[i]>a[j]) {a[0]=a[i];a[i]=a[j];a[j]=a[0];}
	for (i=1;i<m;i++)
		for (j=i+1;j<=m;j++)
			if (b[i]>b[j]) {b[0]=b[i];b[i]=b[j];b[j]=b[0];}
}
void merge()
{
	int i;
	for (i=n+1;i<=n+m;i++)
		a[i]=b[i-n];
}
void print()
{
	int i;
	cout<<a[1];
	for (i=2;i<=n+m;i++) cout<<' '<<a[i];
	cout<<endl;
}
int main()
{
	scanf();
	sort();
	merge();
	print();
}