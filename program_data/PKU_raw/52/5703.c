void jiaohuan(int a[],int i,int n,int m)
{
	int j,t,p,q;
	t=a[n-m+i];
	p=a[i];
	q=a[i+1];
	for(j=i;j<=n-m-1+i;j++)
	{
		a[j+1]=p;
		p=q;
		q=a[j+2];
	}
	a[i]=t;
}
int main()
{
	int a[110],m,n,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=m-1;i++)
		jiaohuan(a,i,n,m);
	printf("%d",a[0]);
	for(i=1;i<=n-1;i++)
		printf(" %d",a[i]);
	printf("\n");
	return 0;
}

