
int main()
{
	int i,j,n,m,a[100],t;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int *p=a;
	for(i=n-m-1;i>=0;i--)
	{
		p=a+i;
		for(j=0;j<m;j++)
		{
			t=*(p+1);
			*(p+1)=*p;
			*p=t;
			p++;
		}
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}

