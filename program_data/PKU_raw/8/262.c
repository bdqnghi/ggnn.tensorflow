int a[1000],b[1000],i,j,n,m;
void read()
{
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
}
void sort()
{	int t;
	for(i=0;i<m-1;i++)
		for(j=i;j<m;j++)
			if(a[j]<a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
	for(i=0;i<n-1;i++)
		for(j=i;j<n;j++)
			if(b[j]<b[i])
			{
				t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
}
void add()
{
	for(i=m,j=0;j<n;i++,j++)
	{
		a[i]=b[j];
	}
}
void print()
{
	for(i=0;i<m+n;i++)
	{
		if(i)
			printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
}

void main()
{
	read();
	sort();
	add();
	print();
}
