int a[100],b[100];
int m,n;
int main()
{
	void getdata(void);
	void bubblesort(int a[],int b[]);
	void merge(void);
	void putdata(void);

	getdata();
	bubblesort(a,b);
	merge();
	putdata();

	return 0;
}

void getdata(void)
{
	int i;
	cin >> m >> n;
	for (i=0;i<m;i++)
	cin >> a[i] ;
	for (i=0;i<n;i++)
		cin >> b[i];
}

void bubblesort(int a[],int b[])
{
	int i,j;
	for (i=1;i<m;i++)
		for (j=0;j<m-i;j++)
			if (a[j]>a[j+1])
			{
				a[j]=a[j]^a[j+1];
				a[j+1]=a[j]^a[j+1];
				a[j]=a[j]^a[j+1];
			}
	for (i=1;i<n;i++)
		for (j=0;j<n-i;j++)
			if (b[j]>b[j+1])
			{
				b[j]=b[j]^b[j+1];
				b[j+1]=b[j]^b[j+1];
				b[j]=b[j]^b[j+1];
			}
}

void merge(void)
{
	int i;
	for (i=0;i<n;i++)
		a[i+m]=b[i];
}

void putdata(void)
{
	int i;
	cout << a[0];
	for (i=1;i<m+n;i++)
		cout << " " << a[i];
}