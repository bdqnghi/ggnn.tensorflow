int n,k,m;
int judge(int i,int r){
	if (i==n-1) return r;
	if (r%(n-1)) return 0;
	return judge(i+1,(r/(n-1))*n+k);
}
int main(){
  cin>>n>>k;
  for (m=1;!judge(0,m*n+k);m++);
  cout<<judge(0,m*n+k);
}