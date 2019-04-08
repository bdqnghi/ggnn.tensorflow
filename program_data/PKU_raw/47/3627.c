void main()
{
	int *a,i,j,k,m,n,*p;
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	
	for(i=n-1,j=0;i>-1,j<n;i--,j++)
		*(p+j)=*(a+i);
	printf("%d",*p);
	for(j=1;j<n;j++)
		printf(" %d",*(p+j));


}