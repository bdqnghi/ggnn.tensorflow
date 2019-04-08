void change(int n,int m,int a[200])
{
	int *p=a,i;
	for(i=n-1;i>=0;i--)
		*(p+i+m)=*(p+i);
	for(i=0;i<m;i++)
		*(p+i)=*(p+i+n);
}
void main()
{
	int n,m,i,a[200];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	change(n,m,a);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i!=n-1) printf(" ");
	}
}