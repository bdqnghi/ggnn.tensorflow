
int main()
{
	int n,m,i;
	scanf("%d%d",&n,&m);
	
	int * p,* h;
	p=(int *)malloc(sizeof(int)*n);
	h=p;
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=h;
	for(i=n-m;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	for(i=0;i<n-m-1;i++)
		printf("%d ",*(p+i));
	printf("%d",*(p+n-m-1));
	free(p);
	return 0;
}