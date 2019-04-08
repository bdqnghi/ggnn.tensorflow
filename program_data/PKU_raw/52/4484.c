void move(int *a,int n,int m);
void main()
{
	int n,m,a[200];
	scanf("%d %d",&n,&m);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	move(a,n,m);
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[n-1]);
}

void move(int *a,int n,int m)
{
	int i;
	for(i=n-1;i>=0;i--)
		a[i+m]=a[i];
	for(i=n;i<n+m;i++)
		a[i-n]=a[i];
}