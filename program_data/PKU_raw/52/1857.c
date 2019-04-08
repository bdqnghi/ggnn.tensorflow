void main()
{
	int no[201];
	int n,m,t,i,j;
	int *p;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&no[i]);
	p=no+n;
	for(i=1;i<=n;i++,p--)
		*(p+m)=*p;
	p++;
	for(i=1;i<=m;i++,p++)
		*p=*(p+n);
	for(i=1;i<=n;i++)
		printf((i==n)?"%d\n":"%d ",no[i]);
}