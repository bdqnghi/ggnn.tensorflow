
void change(int a[],int n)
{
	int i,m1=0,m2=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>m1)
			m1=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>m2&&a[i]<m1)
			m2=a[i];
	}
	a[0]=m1;
	a[1]=m2;
}

void main()
{
	int a[100],i,t,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	change(a,n);
	printf("%d\n%d\n",a[0],a[1]);
}
