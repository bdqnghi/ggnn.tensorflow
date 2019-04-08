unsigned int apple(unsigned int N,unsigned int K);
int main()
{
    unsigned int m,n,k,J;
	scanf("%u %u",&n,&k);
	J=apple(n,k);
	m=J*n+k;
	printf("%u",m);
	return 0;
}
unsigned int apple(unsigned int N,unsigned int K)
{
    unsigned int i,j,l;
	for(i=1;;i++){
		j=i;
		for(l=1;l<N;l++){
		    if((j*N+K)%(N-1)==0)
				j=(j*N+K)/(N-1);
			else break;
		}
	if(l==N) break;
	}
	return j;
}