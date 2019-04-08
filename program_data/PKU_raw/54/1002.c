
int minm(int n,int k);
void main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	printf("%d\n",minm(n,k));
}
int minm(int n,int k)
{
	int i,j,m;
	m=n-1;
	for(j=1;;j++){
		m=j*(n-1);
		for(i=1;i<=n;i++){
			if(m%(n-1)!=0) break;
			m=m+m/(n-1)+k;
			if(i==n) return m;
		}
	}
}