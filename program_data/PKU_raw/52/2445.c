void main()
{
	int *p,*q;
	int i,j,m,n;
	scanf("%d %d",&n,&m);
	p=(int *)malloc(n*sizeof(int));
	q=(int *)malloc(sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",(p+i));
	for(j=0;j<m;j++)
	{
		*q=*(p+n-1);
		for(i=n-1;i>0;i--)
			*(p+i)=*(p+i-1);
		/*???????????????????????????????????????*/
		*p=*q;
	}
	printf("%d",*p);
	for(i=1;i<n;i++)
		printf(" %d",*(p+i));
	printf("\n");
}