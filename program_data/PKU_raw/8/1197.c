const int mmax=1000;
int a[mmax];//??????????????
int b[mmax];
int m,n;
void mread();
void msort();
void mcomb();
void mdisp();
int main()
{
	mread();
	msort();
	mcomb();
	mdisp();
	return 0;
}
void mread(){
	cin >> m >>n;//??
	for(int i=0;i<m;i++)
		cin >> a[i];
	for(int i=0;i<n;i++)
		cin >> b[i];
}
void msort(){
	int t;
	for(int i=0;i<m;i++)//????
		for(int j=m-1;j>i;j--)
			if(a[j-1]>a[j])
			{
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
	for(int i=0;i<n;i++)
		for(int j=n-1;j>i;j--)
			if(b[j-1]>b[j])
			{
				t=b[j-1];
				b[j-1]=b[j];
				b[j]=t;
			}
}
void mcomb()
{
	for(int i=0;i<n;i++)//??
		a[i+m]=b[i];
}
void mdisp()
{
	for(int i=0;i<m+n;i++)//???????
	{
		if(i!=0)
			cout << ' ';
		cout << a[i];
	}
}