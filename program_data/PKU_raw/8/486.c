void input(void);
void sort(int *a,int n,int *b,int m);
void merger(int *a,int n,int *b,int m);
void output(int *a,int n,int m);
int n,m,a[200],b[100];
void input(void)
{
	int i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
}
void sort(int *a,int n,int *b,int m)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[min])
				min=j;
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
    for(i=0;i<m-1;i++)
	{
		min=i;
		for(j=i+1;j<m;j++)
			if(b[j]<b[min])
				min=j;
		if(min!=i)
		{
			temp=b[i];
			b[i]=b[min];
			b[min]=temp;
		}
	}
}

void merger(int *a,int n,int *b,int m)
{
	int i,j;
	for(i=n,j=0;i<n+m,j<m;i++)
		a[i]=b[j++];
}

void output(int *a,int n,int m)
{
	int i;
	for(i=0;i<n+m-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[n+m-1]);
}
void main()
{
	input();
	sort(a,n,b,m);
	merger(a,n,b,m);
	output(a,n,m);
}