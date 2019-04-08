int main()
{
	void order(int p,int q,int r[]);
	int n1,n2,i;
	int a[10000];	
	scanf("%d %d",&n1,&n2);
	for(i=1;i<=n1;i++)
		scanf("%d",&a[i]);
	order(n1,n2,a);
	return 0;
}
void order(int n1,int n2,int a[])
{
	int i;
	for(i=n1-n2+1;i<=n1;i++)
		printf("%d ",a[i]);
	printf("%d",a[1]);
	for(i=2;i<=n1-n2;i++)
		printf(" %d",a[i]);
}
	