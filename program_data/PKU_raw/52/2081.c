void tz(int a[],int n,int m);
void main()
{
	int a[20];
	int m,n,i;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	tz(a,n,m);
}
void tz(int a[],int n,int m)
{
	int *p;
	for(p=a+n-m+1;p<=a+n;p++)
		printf("%d ",*p);
	for(p=a+1;p<a+n-m;p++)
		printf("%d ",*p);
         printf("%d\n",*p);
}
