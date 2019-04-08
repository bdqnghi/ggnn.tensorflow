int n,m,a[1000],b[1000],c[2000];
void f1(void)
{
	int i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
}
void f2(void)
{
	int i,j,p;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
			}
		}
	}
	for(i=1;i<m;i++)
	{
		for(j=0;j<m-i;j++)
		{
			if(b[j]>b[j+1])
			{
				p=b[j];
				b[j]=b[j+1];
				b[j+1]=p;
			}
		}
	}
}
void f3(void)
{
	int i;
	for(i=0;i<n;i++)
		c[i]=a[i];
	for(i=n;i<n+m;i++)
		c[i]=b[i-n];
}
void f4(void)
{
	int i,count=0;
	for(i=0;i<n+m;i++)
	{
		if(count==0)
		{
			printf("%d",c[i]);
			count++;
		}
		else
			printf(" %d",c[i]);
	}
	printf("\n");
}
int main()
{
	f1();
	f2();
	f3();
	f4();
	return 0;
}
