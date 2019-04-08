void main()
{
	int a[200],n,m,i;
	int *p;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	for(i=n;i<=n+n-m;i++)
	{*(a+i)=*(a+i-n);}
	p=a+n-m;
	printf("%d",*p);
	for(i=0,p++;i<n-1;i++,p++)printf(" %d",*p);
}

