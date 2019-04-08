void main()
{
	int n,a[100],i,m1=0,m2=0,j;
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	for (i=0;i<n;i++) if (a[i]>m1) {m1=a[i]; j=i;}
	a[j]=0;
	for (i=0;i<n;i++) if (a[i]>m2) m2=a[i];
	printf("%d\n%d\n",m1,m2);
}
