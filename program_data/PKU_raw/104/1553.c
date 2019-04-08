int x,y;
int maxn;
int dfs(int n){
	int r=0;
	if(n==x||n==y)r++;
	if(n>maxn)return 0;
	r+=dfs(2*n)+dfs(2*n+1);
	if(r==2){
		cout<<n;
		exit(0);
	}
	return r;
}
int main(){
	cin>>x>>y;
	maxn=x>y?x:y;
	dfs(1);
	cout<<x;
}