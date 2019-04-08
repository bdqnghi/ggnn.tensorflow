int main()
{
	int *p,a[100],i,m,n;
	scanf("%d %d",&n,&m);
	p=a+m;
	for(i=0;i<n-m;i++)
	{
		scanf("%d\t",p++);
	}
	p=a;
	for(i=0;i<m;i++)
	{
		scanf("%d\t",p++);
	}
	p=a;
	printf("\n");
	for(i=0;i<n;i++)
	{
           if(i!=n-1)
            {
		printf("%d ",a[i]);}
           if(i==n-1)
            {
		printf("%d",a[i]);}
	}
}