int main(void)
{
	int i,j,n,m,a[101],*p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	p=a+n-1;
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
			*(p-i+1)=*(p-i);
		*(p-n+1)=*(p+1);
	}
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[n-1]);
}