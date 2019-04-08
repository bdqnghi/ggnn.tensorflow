void main()
{
	void move(int a[100],int n,int m);
	int n,m,i,a[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	move(a,n,m);
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[n-1]);
}

void move(int a[100],int n,int m)
{
	int i,d;
	d=a[n-1];
	for(i=n-1;i>0;i--)
		a[i]=a[i-1];
	a[0]=d;
	m--;
	if(m>0) move(a,n,m);
}
