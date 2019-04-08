void main()
{
	int s[1000]={0};
	int n,m,i;
	scanf("%d %d",&n,&m);

	for(i=0;i<n;i++)
		scanf("%d",&s[i]);

	for(i=0;i<n-m;i++)
		s[i+n]=s[i];

	for(i=n-m;i<2*n-m-1;i++)
		printf("%d ",s[i]);
	printf("%d",s[2*n-m-1]);
} 