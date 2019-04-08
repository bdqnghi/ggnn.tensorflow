
int N,K;
int dfs(int n){
	if (n == 0) {
		return N-1;
	}
	int m = dfs(n-1)/(N-1)*N+K;
	if (n == N) {
		return m;
	}
	while (m%(N-1)) {
		m += (int)pow(N,n);
	}
	return m;
}
int main(){
	scanf("%d%d",&N,&K);
	printf("%d",dfs(N));
	return 0;
}