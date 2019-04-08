void main()
{
	int i,n,m;
	scanf("%d %d",&n,&m);
	int *p[100];
	for(i=0;i<n-m;i++)
	{p[i+m]=(int *)calloc(1,sizeof(int));
	scanf("%d",p[i+m]);}
	for(i=0;i<m;i++)
	{
		p[i]=(int *)calloc(1,sizeof(int));
		scanf("%d",p[i]);
	}
	for(i=0;i<n;i++)
	if(i!=0) printf(" %d",*p[i]);else printf("%d",*p[i]);

}