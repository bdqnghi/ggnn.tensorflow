int main()
{
	int n,i,tem;
	int *p1;
	scanf("%d",&n);
	p1=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p1[i]);
	}
	for(i=0;i<n/2;i++)
	{
		tem=p1[i];
		p1[i]=p1[n-1-i];
		p1[n-1-i]=tem;
	}
	printf("%d",p1[0]);
	for(i=1;i<n;i++)
	{
		printf(" %d",p1[i]);
	}
	free(p1);
	return 0;
}
