int apple(int N,int M)
{
	int K;
	if(N==1) K=1;
	else if(M==1) K=1;
	else if(M==0) K=1;
	else if(M>=N) K=apple(N,M-N)+apple(N-1,M);
	else if(M<N) K=apple(N-1,M);
	return K;
}
int main()
{
	int t,M,N,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&M,&N);
		printf("%d\n",apple(N,M));
	}
}