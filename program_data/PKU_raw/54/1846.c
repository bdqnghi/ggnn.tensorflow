
int n,k;
int p(int n,int k){
	if(!k)return 1;
	return n*p(n,k-1);
}
int main(){
	cin>>n>>k;
	cout<<p(n,n)-k*(n-1);
	return 0;
}