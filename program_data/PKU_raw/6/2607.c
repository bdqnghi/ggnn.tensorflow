int main(){
	int mx[200][200];
	int k,m,n,ans=0;
	cin>>k;
	for(int p=1;p<=k;p++){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>*(*(mx+i)+j);
				if(i==1||i==n||j==1||j==m)ans+=*(*(mx+i)+j);
			}
		}
		cout<<ans<<endl;
		ans=0;
	}
}