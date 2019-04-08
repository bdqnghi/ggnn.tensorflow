int much(int M,int N)
{
	int x;
	if(N==1||M==0) x=1;
	else if(M<N) x=much(M,M);
	else x=much(M,N-1)+much(M-N,N);
	return x;
}
void main()
{
	int n,M,N,i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&M,&N);
		a=much(M,N);
		printf("%d\n",a);
	}
	scanf("%d",&b);
}