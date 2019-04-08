int dfs(int k, int b) {
  int ret=(k==1),i;
  for (i=b;i<=k;i++)
	  if (k%i==0)
		  ret+=dfs(k/i,i);
  return ret;
}
int main() {
	int n, k;
	cin>>n;
	for (int i=1;i<=n;i++) {

		cin>>k;
		cout<<dfs(k,2)<<endl;
	}
	return 0;
}

