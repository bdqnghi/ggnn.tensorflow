int main()
{
	int a[101]={0};
	int n,m;
	scanf("%d %d", &n, &m);
	int i,j,num=0,p,q;
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n-m;i++)
	{
		num=a[i];
		a[n+i]=num;
	}
	p=n-m;
	q=2*n-m;
	for(i=p;i<q-1;i++)
	{
        printf("%d ", a[i]);
	}
	printf("%d", a[q-1]);
}