int apple(int n,int k)
{
	int i,j,m,a;
	m=0;
	for(i=1;1;i++){
		if(m!=0)
		{
			break;
		}
		a=i*n+k;
		for(j=2;j<=n;j++){
			if(a%(n-1)!=0)
			{
				a=0;
				break;
			}
			a=(a*n/(n-1))+k;
		}
		if(a!=0){
			m=a;
		}
	}
	return m;
}
int main()
{
	int n,k,m;
	scanf("%d%d",&n,&k);
		m=apple(n,k);
		printf("%d",m);
	
	return 0;
}