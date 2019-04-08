
int main(int argc, char* argv[])
{
	int apple(int n,int k);
	int N,K;
	scanf("%d%d",&N,&K);
	printf("%d",apple(N,K));
	return 0;
}
int apple(int n,int k)
{
	int m,i,j;
	for(j=n+1;;j++){
		m=j;
		for(i=0;i<n;i++){
			if((m-k)>0&&(m-k)%n==0)
				m=(m-k)/n*(n-1);
			else{
				m=0;
				break;
			}
		}
		if(m>0)
			break;
	}
	return j;
}
