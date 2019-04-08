main()
{
	int a[201],n,m,i;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++) scanf("%d",&a[i]);
	for(i=n+1;i<=2*n-m;i++) a[i]=a[i-n];
	for(i=n-m+1;i<=2*n-m;i++) {if(i!=n-m+1) printf(" ");printf("%d",a[i]);}
}