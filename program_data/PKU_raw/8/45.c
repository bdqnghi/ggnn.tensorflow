int n1,n2,a[1000],b[100];
void main()
{
	void A();void B();void c();void d();
	A();
	B();
	c();
	d();
}



void A()
{
	int i;
	scanf("%d%d",&n1,&n2);
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
}
void B()
{
	int z,i,j;
	for(j=n1;j>1;j--)
	{
		for(i=0;i<j-1;i++)
		{
			if(a[i]>a[i+1])
			{
				z=a[i];
				a[i]=a[i+1];
				a[i+1]=z;
			}
		}
	}
	for(j=n2;j>1;j--)
	{
		for(i=0;i<j-1;i++)
		{
			if(b[i]>b[i+1])
			{
				z=b[i];
				b[i]=b[i+1];
				b[i+1]=z;
			}
		}
	}
}
void c()
{
	int i;
	for(i=0;i<n2;i++)
		a[i+n1]=b[i];
}
void d()
{
	int i;
		for(i=0;i<n1+n2-1;i++)
	printf("%d ",a[i]);
		printf("%d",a[n1+n2-1]);
}



