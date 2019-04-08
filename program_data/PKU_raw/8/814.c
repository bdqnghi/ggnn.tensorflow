int a[10000],b[10000],m,n;
int main()
{
	void Read(),Ord(),Gath(),Prin();
	Read();
	Ord();
	Gath();
	Prin();
}

void Read()
{
	int i;
	scanf("%d%d",&m,&n);
	for (i=1;i<=m;i++)
		scanf("%d",&a[i]);
	for (i=1;i<=n;i++)
		scanf("%d",&b[i]);
}

void Ord()
{
	int i,j;
	void swap_a(int i,int j),swap_b(int i,int j);
	for (i=1;i<=m-1;i++)
		for (j=i+1;j<=m;j++)
			if (a[i]>a[j]) swap_a(i,j);
	for (i=1;i<=n-1;i++)
		for (j=i+1;j<=n;j++)
			if (b[i]>b[j]) swap_b(i,j);
}

void Gath()
{
	int i;
	for (i=m+1;i<=m+n;i++)
		a[i]=b[i-m];
}

void Prin()
{
	int i;
	printf("%d",a[1]);
	for (i=2;i<=m+n;i++)
		printf(" %d",a[i]);
}

void swap_a(int i,int j)
{
	int temp;
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

void swap_b(int i,int j)
{
	int temp;
	temp=b[i];
	b[i]=b[j];
	b[j]=temp;
}