int main()
{
	int a[100]={0};
	int b,d,e,f,g,i,j,k,l,m,n,p;
	scanf("%d",&n);
	scanf("%d",&p);
	printf("%d",p);
	a[p]++;
	for(i=2;i<=n;i++)
	{   scanf("%d",&p);
	if (a[p]==0) {printf(" %d",p);a[p]++;}
	}
	return 7;
}