void main()
{
	int f(int m,int n);
	int d,M,N;
	scanf("%d",&d);
	for(;d>0;d--){
	scanf("%d%d",&M,&N);
	printf("%d\n",f(M,N));
	}
}
int f(int m,int n)
{
	if((m==1)||(n==1))
		return 1;
	else if(m<=n)
		return (f(m,m-1)+1);
	else
		return (f(m,n-1)+f(m-n,n));
}
