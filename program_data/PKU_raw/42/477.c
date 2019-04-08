void main()
{
		long a[1000000],t=0,i,j,n,m;
		scanf ("%ld\n",&n);
for (i=0;i<n;i++)
{
	scanf ("%ld",&a[i]);
}
scanf ("%ld",&m);
for (i=0,t=0;i<n;i++)
{
	if (a[i]==m) continue;
	else {a[n+t]=a[i];t++;}
}
for (i=n;i<n+t-1;i++)
{
	printf ("%ld ",a[i]);
}
if (t!=0)
printf ("%ld",a[n+t-1]);
}
