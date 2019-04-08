int a[1001]={0};
int b[1001]={0};
int m,n;
void loaddata()
{
	int l;
	scanf("%d %d",&m,&n);
	for (l=0;l<m;l++) scanf("%d",&a[l]);
	for (l=0;l<n;l++) scanf("%d",&b[l]);
}
void arrsort()
{
	int i,j,k;
	for (i=0;i<m;i++)
	{
		for (j=i+1;j<m;j++)
		{
			if (a[i]>a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (b[i]>b[j])
			{
				k=b[i];
				b[i]=b[j];
				b[j]=k;
			}
		}
	}

}
void add()
{
	int p;
	for (p=0;p<n;p++)
	{
		a[p+m]=b[p];
	}
}
void print()
{
	int q;
	printf("%d",a[0]);
	for (q=1;q<m+n;q++)
	{
		printf(" %d",a[q]);
	}
}

int main()
{
	loaddata();
    arrsort();
	add();
	print();
	return 0;
}