int main()
{
	int *p,*q;
	int m,n,i;
	scanf("%d%d",&n,&m);
	p=(int*)malloc((sizeof(int))*n);
	q=(int*)malloc((sizeof(int))*n);
	for (i=0;i<n;i++)
		scanf("%d",&p[i]);
	for(i=0;i<n-1;i++)
	{
		*q=p[(n-m+i)%n];
		printf("%d ",*q);
		q++;
	}
	printf("%d",p[n-m-1]);
	return 1;
}