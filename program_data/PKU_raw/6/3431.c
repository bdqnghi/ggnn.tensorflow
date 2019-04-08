void sq(int*p,int m,int n)
{
	int i,s;
	s=0;
	for(i=0;i<n;i++)
		s=s+*(p+i);
	for(i=1;i<m;i++)
		s=s+*(p+n*i)+*(p+n*i+n-1);
	for(i=1;i<n-1;i++)
		s=s+*(p+(m-1)*n+i);
	printf("%d\n",s);
}
void main()
{
	int *p,m,n,k,i,j;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d %d",&m,&n);
		p=(int *)malloc(m*n*sizeof(int));
		for(j=0;j<m*n;j++)
			scanf("%d",p+j);
		sq(p,m,n);
		free(p);
	}
}