int main()
{
	int *p,i,a[100],n,m;
	p=a;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)scanf("%d",p++);
	for(i=0,p=a+n-m;i<m;i++,p++)printf("%d ",*p);
	for(i=0,p=a;i<n-m-1;i++,p++)printf("%d ",*p);
	printf("%d",*p);
}